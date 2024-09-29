import sys
import argparse
import multiprocessing
import time
import shutil
import subprocess
import json

from pathlib import Path
from concurrent.futures import ThreadPoolExecutor, as_completed
from dataclasses import dataclass
from collections.abc import Iterator

from versuchung.experiment import Experiment
from versuchung.types import String, List
from versuchung.tex import LuaTable


def _col(text, bg, code):
    offset = 40 if bg else 30
    return "\033[1;" + str(code + offset) + "m" + text + "\033[1;0m"


def red(text, bg=False):
    return _col(text, bg, 1)


def green(text, bg=False):
    return _col(text, bg, 2)


def yellow(text, bg=False):
    return _col(text, bg, 3)


def blue(text, bg=False):
    return _col(text, bg, 4)


def magenta(text, bg=False):
    return _col(text, bg, 5)


def cyan(text, bg=False):
    return _col(text, bg, 6)


def single_check(iterator):
    """Check, if iterator is exhausted after exactly one iteration.

    It returns the single element, if it exists and raises an
    FailedGraphConstraint otherwise.
    """
    if not isinstance(iterator, Iterator):
        iterator = iter(iterator)

    first = next(iterator, None)
    if first is None:
        raise RuntimeError("No element present.")
    second = next(iterator, None)
    if second is not None:
        raise RuntimeError("More than one element present.")
    return first


class TimeMeasure:
    def __enter__(self, *args):
        self._start = time.time()

    def __exit__(self, exec_type, value, traceback):
        self._end = time.time()

    def get_time(self):
        return self._end - self._start


def get_file_loader(dir):
    def file_load(pattern):
        with open(single_check(dir.glob(pattern))) as f:
            return json.load(f)

    return file_load


class SaveTimer(Exception):
    def __init__(self, time):
        self.time = time


def run_cmd(cmd, save_log=lambda x: x, save_cmd=lambda x: x):
    pretty_cmd = " ".join([f"'{x}'" for x in cmd])
    print(yellow("Executing:"), pretty_cmd)
    save_cmd(pretty_cmd)
    timer = TimeMeasure()
    try:
        with timer:
            output = subprocess.run(cmd, check=True, capture_output=True)
            save_log(output)
    except subprocess.CalledProcessError as e:
        print(red("-> ERROR: Execution failed:"), pretty_cmd)
        save_log(e)
        raise SaveTimer(timer.get_time())

    print(green("Finished:"), pretty_cmd)
    return output, timer.get_time()


def run_ara(work_dir, cmd, idx=None):
    if idx is not None:
        work_dir = work_dir / str(idx)
    work_dir.mkdir(exist_ok=True)

    def save_log(obj):
        with open(work_dir / "ARA.stderr.txt", "wb") as log:
            log.write(obj.stderr)
        with open(work_dir / "ARA.stdout.txt", "wb") as log:
            log.write(obj.stdout)

    prefix = ["--dump-prefix", str(work_dir.absolute()) + "/{step_name}.{uuid}."]
    cmd += prefix

    def save_cmd(cmd):
        with open(work_dir / "cmd_line", "w") as f:
            f.write(cmd)

    try:
        _, time = run_cmd(cmd, save_log=save_log, save_cmd=save_cmd)
    except SaveTimer as e:
        return work_dir, e.time, True
    return work_dir, time, False


@dataclass
class ExperimentResult:
    app_name: str
    id: str
    failed: bool


class ARAExperiment(Experiment):
    @staticmethod
    def default_output(filename, experiment_name):
        return {
            "results": LuaTable(filename=filename, experiment_name=experiment_name),
        }

    @staticmethod
    def default_input():
        return {
            "applications": List(String),
            "exclude": List(String),
            "include": List(String),
        }

    def __init__(
        self,
        *args,
        python=None,
        ara=None,
        job_count=None,
        run_dir=None,
        title=None,
        cwd=None,
        side_args=None,
        **kwargs,
    ):
        Experiment.__init__(self, *args, **kwargs)
        self.python = python
        self.ara = ara
        self.job_count = job_count
        self.run_dir = run_dir
        self.cwd = cwd
        self.side_args = side_args
        if title:
            self.title = title

    def prepare_ara(self, app_info, settings=None):
        if settings is None:
            settings = []
        print("Loading:", app_info)

        app_ll = app_info["ll"]
        app_os = app_info["os"]

        extra_config = []
        for setng in settings:
            app_cfg = self.cwd / app_info[setng] if setng in app_info else None

            if app_cfg and app_cfg.exists():
                extra_config.extend(["--step-settings", str(app_cfg.absolute())])

        cmd = [self.python, self.ara, app_ll, "--os", app_os, *extra_config]
        return cmd

    def assign_dict(self, luatable, data):
        for key, value in data.items():
            if isinstance(value, dict):
                self.assign_dict(luatable[key], value)
            elif isinstance(value, list):
                fake_dict = {idx: elem for idx, elem in enumerate(value)}
                self.assign_dict(luatable[key], fake_dict)
            else:
                luatable[key] = value

    def write_extra_config(self, subdir, config, suffix):
        step_data = subdir / f"step_data_{suffix}.json"
        with open(step_data, "w") as c_f:
            c_f.write(json.dumps(config, indent=2))
        return ["--step-settings", step_data.absolute()]

    def prepare_application(self, pool, executor, application_info):
        raise NotImplementedError

    def run(self):
        self.outputs.results["metadata"]["cmdline"] = "meson compile " + self.title
        app_names = set()
        failed_apps = []
        with ThreadPoolExecutor(max_workers=self.job_count) as executor:
            pool = set()

            def submit(function, *args):
                pool.add(executor.submit(function, *args))

            excludes = set([x.value for x in self.inputs.exclude])
            includes = set([x.value for x in self.inputs.include])
            for application_info in self.inputs.applications:
                app_info = json.loads(application_info.value)
                app_name = app_info["name"]
                assert app_name not in app_names, f"Duplicated {app_name=}"
                app_names.add(app_name)
                if app_name in excludes:
                    continue
                if includes and app_name not in includes:
                    continue
                self.prepare_application(submit, app_info)

            for future in as_completed(pool):
                res = future.result()
                assert isinstance(res, ExperimentResult), "result type is incorrect"
                if res.failed:
                    failed_apps.append(res)
                    continue
                self.fill_output(res)
        for app in sorted(failed_apps, key=lambda x: x.id):
            print(f"Failed app {app.app_name} (ID: {app.id})")


def run_ara_experiment(experiment_cls, extra_args=lambda x: x):
    timer = TimeMeasure()
    with timer:
        print("Experiment loaded with:", sys.argv)
        parser = argparse.ArgumentParser()
        parser.add_argument(
            "--work-dir",
            help="Working directory (must be able to store files there).",
            required=True,
            type=Path,
        )
        parser.add_argument("--title", help="Experiment title", required=True)
        parser.add_argument(
            "--python", help="Path to the Python interpreter.", required=True, type=Path
        )
        parser.add_argument(
            "--ara", help="Path to the ARA script.", required=True, type=Path
        )
        parser.add_argument(
            "--jobs",
            type=int,
            default=multiprocessing.cpu_count(),
            help="Maximal number of parallel SIA executions.",
        )
        extra_args(parser)
        args, unknown = parser.parse_known_args()

        assert args.python.is_file(), "--python must be a file"
        assert args.ara.is_file(), "--ara must be a file"

        # create new work_dir folder and delete old one only when created by a
        # previous run
        experiment_id = "experiment." + experiment_cls.__name__
        if args.work_dir.is_dir() and (args.work_dir / experiment_id).is_file():
            shutil.rmtree(args.work_dir)
        args.work_dir.mkdir(exist_ok=False)
        open(args.work_dir / experiment_id, "a").close()

        cwd = Path.cwd()

        experiment = experiment_cls(
            python=args.python,
            ara=args.ara,
            job_count=args.jobs,
            run_dir=args.work_dir,
            title=args.title,
            cwd=cwd,
            side_args=args,
        )
        dirname = experiment(unknown)

        print("Working directory:", args.work_dir.absolute())
        print("Result stored in:", dirname)
    print(f"Experiment time: {timer.get_time():.1f} seconds")
