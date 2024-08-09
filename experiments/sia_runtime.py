#!/usr/bin/env python

import argparse
import copy
import json
import multiprocessing
import subprocess
import sys
import time

from concurrent.futures import ThreadPoolExecutor, as_completed
from pathlib import Path

from versuchung.experiment import Experiment
from versuchung.types import String, List, Integer
from versuchung.files import Directory
from versuchung.tex import LuaTable

ARA_CONFIG = {
    "steps": ["SIA"],
    "SIA": {"traversal_mode": "TBD"},
    "logger": {}
}

job_count = None


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
        "iterations": Integer(default_value=10),
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
        "results": LuaTable(
            filename="sia-runtime.lua", experiment_name="experiments.sia_runtime"
        ),
    }

    def __init__(
        self, *args, python=None, run_dir=None, title=None, cwd=None, **kwargs
    ):
        Experiment.__init__(self, *args, **kwargs)
        self.python = python
        self.run_dir = Path(run_dir)
        self.cwd = cwd
        if title:
            self.title = title

    @staticmethod
    def run_sia(app_name, cur_dir, cmd, mode, idx):
        cur_dir = cur_dir / str(idx)
        cur_dir.mkdir(exist_ok=True)

        def save_log(obj):
            with open(cur_dir / "ARA.stderr.txt", "wb") as log:
                log.write(obj.stderr)
            with open(cur_dir / "ARA.stdout.txt", "wb") as log:
                log.write(obj.stdout)

        timer = TimeMeasure()
        prefix = ["--dump-prefix", str(cur_dir.absolute()) + "/{step_name}.{uuid}."]
        cmd += prefix
        pretty_cmd = " ".join([f"'{x}'" for x in cmd])
        app_failed = False
        print("\033[1;34mExecuting:\033[1;0m", pretty_cmd)
        try:
            with timer:
                ara = subprocess.run(cmd, check=True, capture_output=True)
                save_log(ara)
        except subprocess.CalledProcessError as e:
            print("\033[1;41m-> ERROR: Execution failed:\033[1;0m", pretty_cmd)
            save_log(e)
            app_failed = True

        print("\033[1;32mFinished:\033[1;0m", pretty_cmd)

        if app_failed:
            return {
                "app_name": app_name,
                "mode": str(mode),
                "index": idx,
                "ara_time": timer.get_time(),
                "failed": True,
            }

        sia_time = 0
        with open(cur_dir / "ARA.-.runtime_stats.json") as stats_file:
            for step in json.load(stats_file):
                if step[0] == "SIA":
                    sia_time += step[2]

        return {
            "app_name": app_name,
            "mode": str(mode),
            "index": idx,
            "sia_time": sia_time,
            "ara_time": timer.get_time(),
            "failed": False,
        }

    def prepare_sia(self, pool, executor, application_info, mode):
        app_info = json.loads(application_info.value)

        print("Loading:", app_info)

        app_name = app_info["name"]
        app_ll = app_info["ll"]
        app_os = app_info["os"]
        app_config = self.cwd / app_info["settings"] if "settings" in app_info else None

        cur_config = copy.copy(ARA_CONFIG)
        cur_config["SIA"]["traversal_mode"] = mode.value

        cur_dir = self.run_dir / f"{app_name}.{mode}"
        cur_dir.mkdir(exist_ok=True)

        step_data = cur_dir / f"step_data_sia_{app_name}_{mode}.json"
        with open(step_data, "w") as c_f:
            c_f.write(json.dumps(cur_config, indent=2))

        extra_config = []
        if app_config and app_config.exists():
            extra_config = ["--step-settings", str(app_config.absolute())]

        cmd = [
            self.python,
            self.inputs.ara.value,
            app_ll,
            "--runtime-stats",
            "--runtime-stats-file", "dump",
            "--runtime-stats-format", "json",
            "--os",
            app_os,
        ]
        cmd.extend(extra_config)
        cmd.extend(["--step-settings", str(step_data.absolute())])
        for i in range(self.iterations.value):
            pool.add(
                executor.submit(
                    SiaRuntimeExperiment.run_sia, app_name, cur_dir, cmd, mode, i
                )
            )

    def run(self):
        self.outputs.results["metadata"]["cmdline"] = "meson compile " + self.title
        with ThreadPoolExecutor(max_workers=job_count) as executor:
            pool = set()
            for application_info in self.inputs.applications:
                for mode in self.inputs.modes:
                    self.prepare_sia(pool, executor, application_info, mode)

            for future in as_completed(pool):
                res = future.result()
                if res["failed"] or "sia_time" not in res:
                    print(f"Failed app: {res["app_name"]} ({res["mode"]})")
                self.outputs.results[res["app_name"]][res["mode"]]["sia_runtime"][
                    res["index"]
                ] = res["sia_time"]
                self.outputs.results[res["app_name"]][res["mode"]]["ara_runtime"][
                    res["index"]
                ] = res["ara_time"]


if __name__ == "__main__":
    print("Executed with:", sys.argv)
    parser = argparse.ArgumentParser()
    parser.add_argument(
        "--work-dir", help="Working directory (must be able to store files there)."
    )
    parser.add_argument("--title", help="Experiment title")
    parser.add_argument("--python", help="Path of the python interpreter.")
    parser.add_argument(
        "--jobs",
        default=multiprocessing.cpu_count(),
        help="Maximal number of parallel SIA executions.",
    )
    args, unknown = parser.parse_known_args()
    job_count = args.jobs

    cwd = Path.cwd()

    experiment = SiaRuntimeExperiment(
        python=args.python, run_dir=args.work_dir, title=args.title, cwd=cwd
    )
    dirname = experiment(unknown)

    print(dirname)
