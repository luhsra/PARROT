#!/usr/bin/env python3
import json

from dataclasses import dataclass

from ara_experiment import (
    run_ara_experiment,
    ARAExperiment,
    run_ara,
    ExperimentResult,
    get_file_loader,
    run_cmd,
    SaveTimer
)

ina_config = {
    "steps": [
        {"name": x, "dump": True}
        for x in [
            "InteractionAnalysis",
            "CFGStats",
            "CallGraphStats",
            "InstanceGraphStats",
        ]
    ]
}

sse_config = {"steps": ["SSE", {"name": "SSTGStats", "dump": True}]}
multisse_config = {"steps": ["MultiSSE", {"name": "MSTGStats", "dump": True}]}


@dataclass
class AppStatsResult(ExperimentResult):
    cfg_stats: dict = None
    call_graph_stats: dict = None
    instances: dict = None
    interactions: dict = None
    sstg: dict = None
    mstg: dict = None
    cloc_app: dict = None
    cloc_lib: dict = None


class AppStatsExperiment(ARAExperiment):
    inputs = {**ARAExperiment.default_input()}
    outputs = {**ARAExperiment.default_output("app-stats.lua", "experiments.app_stats")}

    @staticmethod
    def get_stats(app_name, analysis, cur_dir, cmd):
        id = app_name
        work_dir, time, failed = run_ara(cur_dir, cmd)
        if failed:
            return ExperimentResult(app_name=app_name, id=id, failed=True)

        file_load = get_file_loader(work_dir)

        if analysis == "INA":
            instance_graph_stats = file_load("InstanceGraphStats.*.json")
            return AppStatsResult(
                app_name=app_name,
                id=id,
                failed=False,
                cfg_stats=file_load("CFGStats.*.json"),
                call_graph_stats=file_load("CallGraphStats.*.json"),
                instances=instance_graph_stats["instances"],
                interactions=instance_graph_stats["interactions"],
            )
        elif analysis == "SSE":
            return AppStatsResult(
                app_name=app_name,
                id=id,
                failed=False,
                sstg=file_load("SSTGStats.*.json"),
            )
        elif analysis == "MultiSSE":
            return AppStatsResult(
                app_name=app_name,
                id=id,
                failed=False,
                mstg=file_load("MSTGStats.*.json"),
            )

    @staticmethod
    def get_cloc(app_name, cmd, mode):
        try:
            cloc, _ = run_cmd(cmd)
        except SaveTimer:
            return AppStatsResult(app_name=app_name, failed=True)
        cloc = json.loads(cloc.stdout)
        curated_cloc = {"version": cloc["header"]["cloc_version"]}
        lines = sum([cloc[x]["code"] for x in [
                        "C/C++ Header",
                        "C",
                        "C++",
                        "Assembly",
                    ] if x in cloc])
        curated_cloc["lines"] = lines
        if mode == "cloc_app":
            cloc_kw = {"cloc_app": curated_cloc}
        if mode == "cloc_lib":
            cloc_kw = {"cloc_lib": curated_cloc}
        return AppStatsResult(
            app_name=app_name,
            failed=False,
            **cloc_kw,
        )


    def prepare_application(self, submit, app_info):
        for analysis, settings, config in [
            ("INA", "ina_settings", ina_config),
            ("SSE", "sse_settings", sse_config),
            ("MultiSSE", "multisse_settings", multisse_config),
        ]:
            if settings not in app_info:
                continue
            app_name = app_info["name"]
            cmd = self.prepare_ara(app_info, settings=[settings])

            cur_dir = self.run_dir / f"{app_name}.{analysis}"
            cur_dir.mkdir(exist_ok=True)

            cmd += self.write_extra_config(cur_dir, config, f"ina_{app_name}_{analysis}")
            submit(AppStatsExperiment.get_stats, app_name, analysis, cur_dir, cmd)
        for cloc in ["cloc_app", "cloc_lib"]:
            if cloc not in app_info:
                continue
            cmd = [self.side_args.cloc, "--json", *app_info[cloc]]
            submit(AppStatsExperiment.get_cloc, app_info["name"], cmd, cloc)

    def fill_output(self, res):
        results = self.outputs.results[res.app_name]
        if res.cfg_stats:
            self.assign_dict(results["CFGStats"], res.cfg_stats)
        if res.call_graph_stats:
            self.assign_dict(results["CallGraphStats"], res.call_graph_stats)
        if res.instances:
            self.assign_dict(results["instances"], res.instances)
        if res.interactions:
            self.assign_dict(results["interactions"], res.interactions)
        if res.sstg:
            self.assign_dict(results["sstg"], res.sstg)
        if res.mstg:
            self.assign_dict(results["mstg"], res.mstg)
        if res.cloc_app:
            self.assign_dict(results["cloc"]["app"], res.cloc_app)
        if res.cloc_lib:
            self.assign_dict(results["cloc"]["lib"], res.cloc_lib)


def extra_args(parser):
    parser.add_argument("--cloc", help="Path to cloc binary", required=True)


if __name__ == "__main__":
    exp = run_ara_experiment(AppStatsExperiment, extra_args=extra_args)
