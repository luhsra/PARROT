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


@dataclass
class MultiSSETimeout(ExperimentResult):
    mode: str
    index: int


@dataclass
class MultiSSEFailed(ExperimentResult):
    mode: str
    index: int


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
            if failed.reason == "Generic":
                ret_cls = MultiSSEFailed
            elif failed.reason == "Timeout":
                ret_cls = MultiSSETimeout
            else:
                assert False, "Not possible"
            return ret_cls(
                app_name=app_name,
                id=id,
                failed=False,
                mode=str(mode),
                index=idx,
            )

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
                ent.append(val(result[mode]))
        table[key] = sum(ent)
        table[f"{key}_min"] = min(ent)
        table[f"{key}_max"] = max(ent)
        rou = float if time else round
        table[f"{key}_mean"] = rou(mean(ent))

    def after_runs(self, data):
        all = defaultdict(lambda: defaultdict(list))
        apps = defaultdict(lambda: defaultdict(list))
        outcome = defaultdict(dict)
        for result in data:
            all[result.app_name][result.mode].append(result)
            oc = outcome[result.app_name]
            mode = result.mode
            if isinstance(result, MultiSSEFailed):
                oc[mode] = "failed"
            elif isinstance(result, MultiSSETimeout):
                if oc.get(mode, "") != "failed":
                    oc[mode] = "timeout"
            else:
                if mode not in oc:
                    oc[mode] = "success"
                apps[result.app_name][result.mode].append(result)

        failed_apps = [
            x for x, y in outcome.items()
            if y["with_timings"] == "failed" or y["without_timings"] == "failed"
        ]
        timeout_apps = [
            x for x, y in outcome.items()
            if ((y["with_timings"] == "timeout" or y["without_timings"] == "timeout") and x not in failed_apps)
        ]
        running_apps = [
            x for x, y in outcome.items()
            if (x not in failed_apps and x not in timeout_apps)
        ]

        apps = {x: dict(y) for x, y in apps.items() if x in running_apps}

        count = self.outputs.results["all"]
        count["apps"] = len(all)
        count["failed_apps"] = len(failed_apps)
        count["timeout_apps"] = len(timeout_apps)
        count["running_apps"] = len(running_apps)
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

        def assign_details(mode):
            res = []
            for result in mode:
                if isinstance(result, MultiSSEFailed):
                    res.append({"result": "failed"})
                elif isinstance(result, MultiSSETimeout):
                    res.append({"result": "timeout"})
                elif isinstance(result, MultiSSEResult):
                    res.append({
                        "result": "success",
                        "ara_time": result.ara_time,
                        "multisse_time": result.multisse_time,
                        "cfg_stats": result.cfg_stats,
                        "mstg_stats": result.mstg_stats,
                        "ipi_avoidance": result.ipi_avoidance,
                        "lock_elision": result.lock_elision,
                    })
                else:
                    assert False, "Not possible"
                print(result)
            return res

        all_apps = {"details": []}
        for app, modes in all.items():
            all_apps["details"].append({
                "app_name": app,
                "with": assign_details(modes["with_timings"]),
                "no": assign_details(modes["without_timings"]),
            })
        assign_dict(self.outputs.results, all_apps)


if __name__ == "__main__":
    run_ara_experiment(MultiSSEResultsExperiment)
