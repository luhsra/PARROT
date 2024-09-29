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
)

from versuchung.types import String, List, Integer

ARA_CONFIG = {"steps": ["SIA", {"name": "InstanceGraphStats", "dump": True}],
              "SIA": {"traversal_mode": "TBD"}, "logger": {}}


@dataclass
class SiaRuntimeResult(ExperimentResult):
    os: str
    mode: str
    index: int
    ara_time: float
    sia_time: float
    instances: dict


class SiaRuntimeExperiment(ARAExperiment):
    inputs = {
        **ARAExperiment.default_input(),
        "iterations": Integer(default_value=10),
        "modes": List(
            String,
            default_value=[
                String("flowinsensitive"),
                String("flowsensitive"),
                String("mixed"),
            ],
        ),
    }
    outputs = {
        **ARAExperiment.default_output("sia-runtime.lua", "experiments.sia_runtime")
    }

    @staticmethod
    def run_sia(app_name, os, cur_dir, cmd, mode, idx):
        id = f"{app_name}.{mode}.{idx}"
        work_dir, time, failed = run_ara(cur_dir, cmd, idx=idx)
        if failed:
            return ExperimentResult(app_name=app_name, id=id, failed=True)

        file_load = get_file_loader(work_dir)

        sia_time = 0
        ara_stats = file_load("ARA.-.runtime_stats.json")
        for step in filter(lambda x: x[0] == "SIA", ara_stats):
            sia_time += step[2]

        instance_graph_stats = file_load("InstanceGraphStats.*.json")

        return SiaRuntimeResult(
            app_name=app_name,
            id=id,
            failed=False,
            os=os,
            mode=str(mode),
            index=idx,
            ara_time=time,
            sia_time=sia_time,
            instances=instance_graph_stats["instances"],
        )

    def prepare_application(self, submit, application_info):
        if "sia_settings" not in application_info:
            return
        for mode in self.inputs.modes:
            app_name = application_info['name']
            cmd = self.prepare_ara(application_info, settings=['sia_settings'])

            cur_config = copy.copy(ARA_CONFIG)
            cur_config["SIA"]["traversal_mode"] = mode.value

            cur_dir = self.run_dir / f"{app_name}.{mode}"
            cur_dir.mkdir(exist_ok=True)

            cmd += self.write_extra_config(
                cur_dir, cur_config, f"sia_{app_name}_{mode}"
            )
            cmd += [
                "--runtime-stats",
                "--runtime-stats-file", "dump",
                "--runtime-stats-format", "json",
            ]

            for i in range(self.iterations.value):
                submit(
                    SiaRuntimeExperiment.run_sia,
                    app_name,
                    application_info['os'],
                    cur_dir,
                    copy.copy(cmd),
                    mode,
                    i,
                )

    def fill_output(self, res):
        results = self.outputs.results[res.app_name]
        results["os"] = res.os
        results[res.mode]["sia_runtime"][res.index] = res.sia_time
        results[res.mode]["ara_runtime"][res.index] = res.ara_time
        self.assign_dict(results["instances"], res.instances)


if __name__ == "__main__":
    run_ara_experiment(SiaRuntimeExperiment)
