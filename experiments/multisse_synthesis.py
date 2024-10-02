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

T11_vals = {
    "type": "values",
    "mapping": [
        [1, "p09"],
        [2, "p11"],
        [3, "p13"],
        [4, "p15"],
        [5, "p17"],
    ],
}

T01_vals = {
    "type": "diffs",
    "mapping": [
        ["0>1", "all"],
    ],
}

T02_vals = {
    "type": "diffs",
    "mapping": [
        ["0>1", "all"],
    ],
}

copter_vals = {
    "type": "diffs",
    "mapping": [
        ["0>1", "SignalGather"],
        ["1>2", "ignore"],
        ["2>3", "MavlinkSend"],
    ],
}

measurements = {
    "example": {
        "T11_noopt": {
            "target": "autosar_multicore_paper_running_pmu_T11_noopt_pi4",
            "values": T11_vals,
        },
        "T11_opt": {
            "target": "autosar_multicore_paper_running_pmu_T11_opt_pi4",
            "values": T11_vals,
        },
        "T01_noopt": {
            "target": "autosar_multicore_paper_running_pmu_T01_noopt_pi4",
            "values": T01_vals,
        },
        "T01_opt": {
            "target": "autosar_multicore_paper_running_pmu_T01_opt_pi4",
            "values": T01_vals,
        },
        "T02_noopt": {
            "target": "autosar_multicore_paper_running_pmu_T02_noopt_pi4",
            "values": T02_vals,
        },
        "T02_opt": {
            "target": "autosar_multicore_paper_running_pmu_T02_opt_pi4",
            "values": T02_vals,
        },
    },
    "i4copter": {
        "noopt": {
            "target": "autosar_multicore_complex_copter_autostart_pmu_noopt_pi4",
            "values": copter_vals,
        },
        "opt": {
            "target": "autosar_multicore_complex_copter_autostart_pmu_opt_pi4",
            "values": copter_vals,
        },
    },
}

translation = {}

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
                type = reg["type"]
                idx = reg["idx"]
                val = int(reg["value"])
                if type == "val":
                    values[int(idx)].append(val)
                elif type == "d":
                    diffs[idx].append(val)
                else:
                    assert False
        return {"values": values, "diffs": diffs}

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
        outp = output.stdout.decode("UTF-8").split("NEWRUN")[1:-1]
        runs = []
        for idx, run in enumerate(outp):
            print("Run", idx)
            lines = run.split("\n")
            runo = []
            for line in lines:
                if line.startswith("RAW"):
                    continue
                if not line:
                    continue
                runo.append(line)
            runs.append(runo)
        return self.evaluate(runs)

    def run(self):
        self.outputs.results["metadata"]["cmdline"] = "meson compile " + self.title
        self.remote_serial = self.remote_serial.replace(
            "REPLACE_WITH_RUNS", str(self.inputs.iterations.value)
        )
        print("Run on remote host:")
        print(self.remote_serial)
        # keep the session open
        cmd = [
            self.ssh,
            self.rpi_host,
            "while true; do echo 'session open'; sleep 5; done",
        ]
        try:
            with subprocess.Popen(cmd) as proc:
                std_devs = []
                for app, meas in measurements.items():
                    for name, target in meas.items():
                        measured = self.measure(target["target"])
                        vals = target["values"]
                        print(f"Measured {app}, {name}: {vals}")
                        res = self.outputs.results[app][name]
                        results = {}
                        for elem in vals["mapping"]:
                            value = measured[vals["type"]][elem[0]]
                            std = numpy.std(numpy.array(value))
                            results[elem[1]] = {
                                "raw": list(value),
                                "mean": round(numpy.mean(numpy.array(value))),
                                "std": std,
                            }
                            std_devs.append(std)
                        assign_dict(res, results)
                proc.terminate()
                std_dev = {
                    "mean": numpy.mean(numpy.array(std_devs)),
                    "max": numpy.max(numpy.array(std_devs)),
                }
                assign_dict(self.outputs.results["std_dev"], std_dev)
        except subprocess.CalledProcessError as e:
            print("SSH SESSION OPENER FAILED", e.stderr)
            raise (e)


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
