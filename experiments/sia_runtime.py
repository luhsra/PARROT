#!/usr/bin/env python
import copy
import json


from ara_experiment import run_ara_experiment, ARAExperiment, run_ara

from versuchung.types import String, List, Integer

ARA_CONFIG = {"steps": ["SIA"], "SIA": {"traversal_mode": "TBD"}, "logger": {}}


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
    def run_sia(app_name, cur_dir, cmd, mode, idx):
        work_dir, time, failed = run_ara(cur_dir, cmd, idx=idx)

        ret = {
            "app_name": app_name,
            "mode": str(mode),
            "index": idx,
            "ara_time": time,
            "failed": True,
        }

        if failed:
            return ret

        sia_time = 0
        with open(work_dir / "ARA.-.runtime_stats.json") as stats_file:
            for step in json.load(stats_file):
                if step[0] == "SIA":
                    sia_time += step[2]
        return {**ret, "sia_time": sia_time, "failed": False}

    def prepare_application(self, submit, application_info):
        if "sia_settings" not in application_info:
            return
        for mode in self.inputs.modes:
            app_name, cmd = self.prepare_ara(application_info)

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
                    cur_dir,
                    copy.copy(cmd),
                    mode,
                    i,
                )

    def fill_output(self, res):
        self.outputs.results[res["app_name"]][res["mode"]]["sia_runtime"][
            res["index"]
        ] = res["sia_time"]
        self.outputs.results[res["app_name"]][res["mode"]]["ara_runtime"][
            res["index"]
        ] = res["ara_time"]


if __name__ == "__main__":
    run_ara_experiment(SiaRuntimeExperiment)
