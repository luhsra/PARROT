#!/usr/bin/env python3
import argparse
import subprocess
import re
import numpy

from pathlib import Path
from collections import defaultdict

from versuchung.experiment import Experiment
from versuchung.types import Integer
from versuchung.tex import LuaTable

from ara_experiment import assign_dict


measurements = {
    "example": {
        "T11_noopt": "autosar_multicore_paper_running_pmu_T11_noopt_pi4",
        "T11_opt": "autosar_multicore_paper_running_pmu_T11_opt_pi4",
        "T01_noopt": "autosar_multicore_paper_running_pmu_T01_noopt_pi4",
        "T01_opt": "autosar_multicore_paper_running_pmu_T01_opt_pi4",
        "T02_noopt": "autosar_multicore_paper_running_pmu_T02_noopt_pi4",
        "T02_opt": "autosar_multicore_paper_running_pmu_T02_opt_pi4",
    },
    "i4copter": {
        "noopt": "autosar_multicore_complex_copter_autostart_pmu_noopt_pi4",
        "opt": "autosar_multicore_complex_copter_autostart_pmu_opt_pi4",
    }
}

VAL = re.compile(r"(?P<type>[a-z]+)\[(?P<idx>.*?)\]=(?P<value>\d+)")


class MultiSSESynthesis(Experiment):
    inputs = {
        "iterations": Integer(default_value=-1),
    }
    outputs = {
        "results": LuaTable(
            filename="multisse_synthesis.lua",
            experiment_name="experiments.multisse_synthesis",
        ),
    }

    def __init__(
        self,
        *args,
        title="",
        build_dir=None,
        ninja=None,
        rpi_host=None,
        ssh=None,
        **kwargs,
    ):
        Experiment.__init__(self, *args, **kwargs)
        self.title = title
        self.ninja = ninja
        self.build_dir = build_dir
        self.rpi_host = rpi_host
        self.ssh = ssh

        with open(Path(__file__).parent / "remote_serial.py") as f:
            self.remote_serial = f.read()
        assert "'" not in self.remote_serial, "Forbidden chars"

    def run_ninja(self, target):
        subprocess.run([self.ninja, target, "-v"], check=True, cwd=self.build_dir)

    def evaluate(self, runs):
        values = defaultdict(list)
        diffs = defaultdict(list)
        for run in runs:
            for value in run:
                reg = VAL.fullmatch(value)
                type = reg['type']
                idx = reg['idx']
                val = int(reg['value'])
                if type == 'val':
                    values[int(idx)].append(val)
                elif type == 'd':
                    diffs[idx].append(val)
                else:
                    assert False
        return values, diffs

    def measure(self, target):
        # normally we would call meson directly, but meson compile seems not
        # to able to run commands in subprojects
        self.run_ninja(f"ara@@tftp_{target}")
        remote_cmd = f"/usr/bin/env python3 -c '{self.remote_serial}'"
        ssh_cmd = [self.ssh, self.rpi_host, remote_cmd]
        print("Get measurements per SSH. This may take a long time.")
        try:
            output = subprocess.run(ssh_cmd, check=True, capture_output=True)
        except subprocess.CalledProcessError as e:
            print("SSH FAILED", e.stderr)
            raise (e)
        outp = output.stdout.decode('UTF-8').split('NEWRUN')[1:-1]
        runs = []
        for idx, run in enumerate(outp):
            print("Run", idx)
            lines = run.split('\n')
            runo = []
            for line in lines:
                if line.startswith('RAW'):
                    continue
                if not line:
                    continue
                runo.append(line)
            runs.append(runo)
        return self.evaluate(runs)

    def run(self):
        self.remote_serial = self.remote_serial.replace(
            "REPLACE_WITH_RUNS", str(self.inputs.iterations.value)
        )
        print("Run on remote host:")
        print(self.remote_serial)
        for app, meas in measurements.items():
            for name, target in meas.items():
                values, diffs = self.measure(target)
                print(values, diffs)
                res = self.outputs.results[app][name]
                results = {}
                for key, value in values.items():
                    results[f"p{key}"] = {
                        "raw": list(value),
                        "mean": round(numpy.mean(numpy.array(value))),
                        "std": numpy.std(numpy.array(value)),
                    }
                assign_dict(res, results)


if __name__ == "__main__":
    parser = argparse.ArgumentParser()
    parser.add_argument("--title", help="Experiment title", required=True)
    parser.add_argument("--ninja", help="Path to Ninja.", required=True, type=Path)
    parser.add_argument(
        "--build-dir", help="Path to a PARROT builddirectory", required=True, type=Path
    )
    parser.add_argument(
        "--rpi-host", help="SSH host for RPI measurements", required=True, type=Path
    )
    parser.add_argument("--ssh", help="path to SSH binary", required=True, type=Path)
    args, unknown = parser.parse_known_args()
    experiment = MultiSSESynthesis(
        ninja=args.ninja,
        title=args.title,
        build_dir=args.build_dir,
        rpi_host=args.rpi_host,
        ssh=args.ssh,
    )
    print(unknown)
    dirname = experiment(unknown)
    print("Result stored in:", dirname)
