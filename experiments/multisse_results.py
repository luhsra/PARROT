#!/usr/bin/env python
import copy
import json

from dataclasses import dataclass


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
    inputs = {
        **ARAExperiment.default_input(),
        "iterations": Integer(default_value=10),
    }
    outputs = {
        **ARAExperiment.default_output(
            "multisse-results.lua", "experiments.multisse_results"
        )
    }

    @staticmethod
    def run_multisse(app_name, os, cur_dir, cmd, mode, idx):
        id = f"{app_name}.{mode}.{idx}"
        work_dir, time, failed = run_ara(cur_dir, cmd, idx=idx)
        if failed:
            return ExperimentResult(app_name=app_name, id=id, failed=True)

        file_load = get_file_loader(work_dir)

        multisse_time = get_runtime_stats(file_load, ["MultiSSE", "LockElision", "IPIAvoidance"])

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
        if "multisse_settings" not in application_info:
            return
        for mode in ["with_timings", "without_timings"]:
            app_name = application_info["name"]
            cmd = self.prepare_ara(application_info, settings=["multisse_settings"])

            cur_config = copy.copy(ARA_CONFIG)
            if mode == "with_timings":
                if "timings" not in application_info:
                    continue
                cmd += ["--timings", application_info["timings"]]
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
                    application_info["os"],
                    cur_dir,
                    copy.copy(cmd),
                    mode,
                    i,
                )

    def fill_output(self, res):
        results = self.outputs.results[res.app_name][res.mode]
        results["multisse_runtime"][res.index] = res.multisse_time
        results["ara_runtime"][res.index] = res.ara_time
        if res.index == 0:
            assign_dict(results["cfg_stats"], res.cfg_stats)
            assign_dict(results["mstg_stats"], res.mstg_stats)
            assign_dict(results["ipi_avoidance"], res.ipi_avoidance)
            assign_dict(results["lock_elision"], res.lock_elision)


if __name__ == "__main__":
    run_ara_experiment(MultiSSEResultsExperiment)
