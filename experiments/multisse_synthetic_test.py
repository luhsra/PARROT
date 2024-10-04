#!/usr/bin/env python
import copy

from dataclasses import dataclass
from collections import defaultdict
from statistics import mean
from functools import partial


from ara_experiment import (
    run_ara_experiment,
    ARAExperiment,
    run_ara,
    ExperimentResult,
    get_file_loader,
    assign_dict,
    get_runtime_args,
    get_runtime_stats,
)

from versuchung.types import String, List, Integer

ARA_CONFIG = {
    "steps": [
        "MultiSSE",
        *[
            {"name": x, "dump": True}
            for x in ["LockElision", "IPIAvoidance", "MSTGStats", "CFGStats"]
        ],
    ],
    "MultiSSE": {"with_times": False},
    "logger": {},
}


@dataclass
class MultiSSEResult(ExperimentResult):
    mode: str
    index: int
    ara_time: float
    multisse_time: float
    cfg_stats: dict
    mstg_stats: dict
    ipi_avoidance: dict
    lock_elision: dict


class MultiSSEResultsExperiment(ARAExperiment):
    JSON_DIRECT = True

    inputs = {
        **ARAExperiment.default_input(json_direct=True),
        "iterations": Integer(default_value=10),
    }
    outputs = {
        **ARAExperiment.default_output(
            "multisse-synthetic.lua", "experiments.multisse_synthetic"
        )
    }

    @staticmethod
    def run_multisse(app_name, cur_dir, cmd, mode, idx):
        id = f"{app_name}.{mode}.{idx}"
        work_dir, time, failed = run_ara(cur_dir, cmd, idx=idx, timeout=14400)
        if failed:
            return ExperimentResult(app_name=app_name, id=id, failed=True)

        file_load = get_file_loader(work_dir)

        multisse_time = get_runtime_stats(
            file_load, ["MultiSSE", "LockElision", "IPIAvoidance"]
        )

        return MultiSSEResult(
            app_name=app_name,
            id=id,
            failed=False,
            mode=str(mode),
            index=idx,
            ara_time=time,
            multisse_time=multisse_time,
            cfg_stats=file_load("CFGStats.*.json"),
            mstg_stats=file_load("MSTGStats.*.json"),
            ipi_avoidance=file_load("IPIAvoidance.*.json"),
            lock_elision=file_load("LockElision.*.json"),
        )

    def prepare_application(self, submit, application_info):
        application_info["os"] = "AUTOSAR"
        for mode in ["with_timings", "without_timings"]:
            app_name = application_info["name"]
            cmd = self.prepare_ara(application_info, settings=["multisse_settings"])

            cur_config = copy.copy(ARA_CONFIG)
            if mode == "with_timings":
                cmd += ["--timings", "BB"]
                cur_config["MultiSSE"]["with_times"] = True

            cur_dir = self.run_dir / f"{app_name}.{mode}"
            cur_dir.mkdir(exist_ok=True)

            cmd += self.write_extra_config(
                cur_dir, cur_config, f"sia_{app_name}_{mode}"
            )
            cmd += get_runtime_args()

            for i in range(self.iterations.value):
                submit(
                    MultiSSEResultsExperiment.run_multisse,
                    app_name,
                    cur_dir,
                    copy.copy(cmd),
                    mode,
                    i,
                )

    def fill_output(self, res):
        return res

    def assign(self, key, val, apps=None, table=None, modes=None, time=False):
        ent = []
        for app, result in apps.items():
            for mode in modes:
                print("RES", result[mode])
                ent.append(val(result[mode]))
        table[key] = sum(ent)
        table[f"{key}_min"] = min(ent)
        table[f"{key}_max"] = max(ent)
        rou = float if time else round
        table[f"{key}_mean"] = rou(mean(ent))

    def after_runs(self, data):
        apps = defaultdict(lambda: defaultdict(list))
        for result in data:
            apps[result.app_name][result.mode].append(result)
        apps = {x: dict(y) for x, y in apps.items() if len(y) == 2}
        import pprint

        print("APPS")
        pprint.pprint(apps, indent=2)

        count = self.outputs.results["all"]
        count["apps"] = len(apps)
        assign = partial(
            self.assign,
            apps=apps,
            table=count,
            modes=["with_timings", "without_timings"],
        )
        assign("edges", lambda x: x[0].mstg_stats["num_edges"])
        assign("vertices", lambda x: x[0].mstg_stats["num_vertices"])

        for table_name, mode in [("no", "without_timings"), ("with", "with_timings")]:
            assign = partial(
                self.assign,
                apps=apps,
                table=self.outputs.results[table_name],
                modes=[mode],
            )
            assign("edges", lambda x: x[0].mstg_stats["num_edges"])
            assign("vertices", lambda x: x[0].mstg_stats["num_vertices"])
            assign("num_ipis", lambda x: len(x[0].ipi_avoidance["places"]))
            assign("ipi_avoidable", lambda x: x[0].ipi_avoidance["num_not_used_ipis"])
            assign("num_callsites", lambda x: len(x[0].lock_elision["callsites"]))
            assign(
                "passing_callsites",
                lambda x: x[0].lock_elision["num_unneeded_call_pairs"],
            )
            assign(
                "ara_time",
                lambda x: mean([y.ara_time for y in x]),
                time=True)
            assign(
                "multisse_time",
                lambda x: mean([y.multisse_time for y in x]),
                time=True
            )


if __name__ == "__main__":
    run_ara_experiment(MultiSSEResultsExperiment)
