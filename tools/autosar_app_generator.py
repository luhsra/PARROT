#!/usr/bin/env python3
"""Generate a set of AUTOSAR applications."""

import argparse
import shutil
import sys

from pathlib import Path

INIT = """
project('generated-autosar-apps', 'cpp',
  default_options : ['warning_level=3',
                     'cpp_std=c++17',
                     'buildtype=debugoptimized'])

benchmark_gen = files('benchmark_gen.py')[0]

py3_mod = import('python')
py3_inst = py3_mod.find_installation('python3', modules: 'jinja2')

nop = [py3_inst, '-c', 'pass']

toolchains = subproject('toolchains')
clang_cpp_cmd = toolchains.get_variable('clang_cpp_cmd')
clang_flags = toolchains.get_variable('clang_flags')
ir_flags = toolchains.get_variable('ir_flags')

ara_proj = subproject('ara')
autosar_includes = ara_proj.get_variable('autosar_includes')
posix_autosar_includes = ara_proj.get_variable('posix_autosar_includes')

apps = []
all_lls = []
"""

GEN = """
{name}_cc = custom_target('{name}_cc',
  output: ['{cc_file}', '{oil_file}'],
  command: [
    py3_inst, benchmark_gen,
    '--seed', '{seed}',
    '--system', '@OUTPUT0@',
    '--oil', '@OUTPUT1@',
    '--cores', '{num_cores}',
    '--locks', '{num_locks}',
    '--lock-users', '{num_lock_users}',
    '--subtasks', '{num_subtasks}',
    '--at-local', '{perc_at_local}',
    '--se-local', '{perc_se_local}',
    '--events', '{num_events}']
  )

conf_data = configuration_data()
conf_data.set('oil_file', {name}_cc[1].full_path())
multisse_settings = configure_file(input : files('multisse_synthetic_app.json.in'),
                                   output : '{name}_settings.json',
                                   configuration : conf_data)

app = {{
    'name': '{name}',
    'cc': {name}_cc[0],
    'oil': {name}_cc[1],
    'settings': multisse_settings,
}}
"""

COMPILE = """
{name}_ll = custom_target('{name}_ll',
  input: {name}_cc[0],
  depfile: '{cc_file}.dep',
  output: '{cc_file}.ll',
  command: clang_cpp_cmd + autosar_includes + posix_autosar_includes + ir_flags + clang_flags)

app = app + {{
    'll': {name}_ll,
}}
apps += [app]
all_lls += [{name}_ll]
"""

# RUN_ARA = """
# {name}_{timed}_stepdata = custom_target('{name}_{timed}_stepdata',
#   input: [ara_py, {name}_ll],
#   output: '{name}.multisse.{timed}_timing.stepdata.json',
#   command: [ctimeout, py3_inst, ara_py, {name}_ll,
#   '--oilfile', {name}_cc[1],
#   '--step-settings', {timed}_timing_settings,
#   '--timings', 'BB',
#   '--os', 'AUTOSAR',
#   '--step-data', '@OUTPUT0@'],
# )

# {timed}_jsons +={name}_{timed}_stepdata
# all_jsons += {name}_{timed}_stepdata
# """

# RUN_ARA_OUTFILE = """{name}.multisse.{timed}_timing.stepdata.json"""

# DEPENDER = """
# run_target('run_multisse_dynamic_experiment_all', command: ['ls'], depends: all_jsons)
# run_target('run_multisse_dynamic_experiment_generator', command: ['echo', 'generator finished'], depends: ir_files)
# run_target('run_multisse_dynamic_experiment_no_timing', command: ['ls'], depends: no_jsons)
# run_target('run_multisse_dynamic_experiment_with_timing', command: ['ls'], depends: with_jsons)
# """

# DEPENDER_GENERATOR = 'run_multisse_dynamic_experiment_generator'

# DEPENDER_NAME = 'run_multisse_dynamic_experiment_all'

SUMMARY = """
summary('Generated apps', apps.length())

build_generated_lls = 'build-generated-lls'
run_target(build_generated_lls,
  command: nop,
  depends: all_lls,
)
summary('Build all generated LLs', 'meson compile ' + build_generated_lls)
"""


def gen_system(
    seed,
    run,
    num_cores,
    num_locks,
    num_lock_users,
    num_subtasks,
    perc_at_local,
    perc_se_local,
    num_events,
    mf,
):
    seed = seed + run

    name = (
        f"synthetic_{num_cores:02}C_{num_locks:02}L_{num_lock_users}U"
        f"_{num_subtasks:02}T"
        f"_{perc_at_local:02}A_{perc_se_local:02}S_{num_events:02}E"
        f"__{seed:04}"
    )
    cc_file = f"{name}.cc"
    oil_file = f"{name}.oil.json"
    mf.write(
        GEN.format(
            seed=seed,
            cc_file=cc_file,
            oil_file=oil_file,
            num_cores=num_cores,
            num_locks=num_locks,
            num_lock_users=num_lock_users,
            num_subtasks=num_subtasks,
            perc_at_local=perc_at_local,
            perc_se_local=perc_se_local,
            num_events=num_events,
            name=name,
        )
    )

    mf.write(COMPILE.format(name=name, cc_file=cc_file))
    # for timed in ['no', 'with']:
    #     mf.write(RUN_ARA.format(name=name,
    #                             timed=timed,
    #                             oil_file=oil_file))
    #     ret[name][timed] = RUN_ARA_OUTFILE.format(name=name,
    #                                               timed=timed,
    #                                               oil_file=oil_file)


def main():
    parser = argparse.ArgumentParser(description=sys.modules[__name__].__doc__)
    parser.add_argument(
        "--subproject-dir",
        required=True,
        type=Path,
        help="Directory where to create the Meson subproject",
    )
    parser.add_argument(
        "--seed", required=True, type=int, help="Seed used for app generation."
    )
    parser.add_argument(
        "--benchmark-gen",
        required=True,
        type=Path,
        help="Path to the benchmark_generator.",
    )
    parser.add_argument(
        "--benchmark-gen-template",
        required=True,
        type=Path,
        help="Path to the benchmark_generator template.",
    )
    parser.add_argument(
        "--multisse-settings",
        required=True,
        type=Path,
        help="Path to the multisse settings json.",
    )
    parser.add_argument(
        "--toolchains-wrap",
        required=True,
        type=Path,
        help="Path to the toolchains subproject wrap.",
    )
    parser.add_argument(
        "--ara-wrap", required=True, type=Path, help="Path to the ara subproject wrap."
    )
    parser.add_argument(
        "--runs", default=100, type=int, help="Amount of apps per configuration."
    )

    args = parser.parse_args()

    print("Writing meson file")
    if args.subproject_dir.exists():
        shutil.rmtree(args.subproject_dir)
    args.subproject_dir.mkdir()

    def copyf(file, target_name):
        assert file.is_file()
        shutil.copyfile(file, args.subproject_dir / target_name)

    copyf(args.benchmark_gen, "benchmark_gen.py")
    copyf(args.benchmark_gen_template, "benchmark_gen_system.jinja")
    copyf(args.multisse_settings, "multisse_synthetic_app.json.in")

    subprojects = args.subproject_dir / "subprojects"
    subprojects.mkdir()
    assert args.toolchains_wrap.is_file()
    shutil.copyfile(args.toolchains_wrap, subprojects / "toolchains.wrap")
    assert args.ara_wrap.is_file()
    shutil.copyfile(args.ara_wrap, subprojects / "ara.wrap")

    with open(args.subproject_dir / "meson.build", "w") as mf:
        mf.write(INIT)
        for num_cores in [2, 3, 6]:
            for num_locks in [1, 3]:
                for num_lock_users in [2, 6]:
                    for num_subtasks in [15]:
                        for perc_at_local in [90]:
                            for perc_se_local in [90]:
                                for num_events in [0, 5]:
                                    for run in range(args.runs):
                                        gen_system(
                                            seed=args.seed,
                                            run=run,
                                            num_cores=num_cores,
                                            num_locks=num_locks,
                                            num_lock_users=num_lock_users,
                                            num_subtasks=num_subtasks,
                                            perc_at_local=perc_at_local,
                                            perc_se_local=perc_se_local,
                                            num_events=num_events,
                                            mf=mf,
                                        )
        mf.write(SUMMARY)
    print("Subproject initialized in", args.subproject_dir)
    print("You may want to run 'meson --reconfigure' to load the project.")


if __name__ == "__main__":
    main()
