#!/usr/bin/env python

import argparse
import copy
import json
import subprocess
import time

from pathlib import Path

from versuchung.experiment import Experiment
from versuchung.types import String, List
from versuchung.files import Directory
from versuchung.tex import LuaTable

ARA_CONFIG = {
    "steps": ["SIA"],
    "SIA": {"traversal_mode": "TBD"},
}


class TimeMeasure:
    def __enter__(self, *args):
        self._start = time.time()

    def __exit__(self, exec_type, value, traceback):
        self._end = time.time()

    def get_time(self):
        return self._end - self._start


class SiaRuntimeExperiment(Experiment):
    inputs = {
        "result_dir": Directory(default_filename="sia_measurements_results"),
        "ara": String(default_value="ara"),
        "applications": List(String),
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
        "results": LuaTable(filename="sia-runtime.lua", experiment_name="experiments.sia_runtime"),
    }

    def __init__(self, *args, python=None, run_dir=None, title=None, cwd=None, **kwargs):
        Experiment.__init__(self, *args, **kwargs)
        self.python = python
        self.run_dir = Path(run_dir)
        self.cwd = cwd
        if title:
            self.title = title

    def run_sia(self, application_info, mode):
        timer = TimeMeasure()

        app_info = json.loads(application_info.value)

        print("Loading:", app_info)

        app_name = app_info["name"]
        app_ll = app_info["ll"]
        app_os = app_info["os"]
        app_config = self.cwd / app_info["settings"] if "settings" in app_info else None

        cur_config = copy.copy(ARA_CONFIG)
        cur_config["SIA"]["traversal_mode"] = mode.value

        cur_dir = (self.run_dir / f"{app_name}.{mode}")
        cur_dir.mkdir(exist_ok=True)

        step_data = cur_dir / f"step_data_sia_{app_name}_{mode}.json"
        with open(step_data, 'w') as c_f:
            c_f.write(json.dumps(cur_config, indent=2))

        extra_config = []
        if app_config and app_config.exists():
            extra_config = ["--step-settings", str(app_config.absolute())]

        cmd = [
            self.python, self.inputs.ara.value, app_ll,
            "--runtime-stats",
            "--dump-prefix", str(cur_dir.absolute()) + "/{step_name}.{uuid}.",
            "--runtime-stats-file", "dump",
            "--runtime-stats-format", "json",
            "--os", app_os,
        ]
        cmd.extend(extra_config)
        cmd.extend(["--step-settings", str(step_data.absolute())])
        print("Executing", ' '.join([f"'{x}'" for x in cmd]))
        for i in range(1):
            try:
                with timer:
                    subprocess.run(cmd, check=True)
                with open(cur_dir / 'ARA.-.runtime_stats.json') as stats_file:
                    sia_time = 0
                    for step in json.load(stats_file):
                        if step[0] == "SIA":
                            sia_time += step[2]
                    self.outputs.results[app_name][str(mode)]['sia_runtime'][i] = sia_time

                self.outputs.results[app_name][str(mode)]['ara_runtime'][i] = timer.get_time()
            except subprocess.CalledProcessError as e:
                print("Execution failed")
                print(' '.join([f"'{x}'" for x in cmd]))
                raise e

    def run(self):
        self.outputs.results['metadata']['cmdline'] = 'meson compile ' + self.title
        for application_info in self.inputs.applications:
            for mode in self.inputs.modes:
                self.run_sia(application_info, mode)


if __name__ == "__main__":
    import sys
    print(sys.argv)
    parser = argparse.ArgumentParser()
    parser.add_argument("--work-dir", help="Working directory (must be able to store files there).")
    parser.add_argument("--title", help="Experiment title")
    parser.add_argument("--python", help="Path of the python interpreter.")
    args, unknown = parser.parse_known_args()

    cwd = Path.cwd()

    experiment = SiaRuntimeExperiment(python=args.python, run_dir=args.work_dir, title=args.title, cwd=cwd)
    dirname = experiment(unknown)

    print(dirname)
