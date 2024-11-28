#!/usr/bin/env python3
"""Push all currently checked out git repos to Github"""

import argparse
import subprocess
import sys
import re

from dataclasses import dataclass
from pathlib import Path
from typing import List


@dataclass
class Rewrite:
    scm: str
    gh: str

    def get_scm(self):
        return "scm.sra.uni-hannover.de/" + self.scm

    def get_gh(self, git=False):
        if git:
            return f"git@github.com:{self.gh}.git"
        return f"https://github.com/{self.gh}.git"

    def scm_matches(self, scm_url):
        reg = r".*scm\.sra\.uni.hannover\.de." + self.scm + r"\.git"
        return re.fullmatch(reg, scm_url)


@dataclass
class WrapRewrite:
    wrap_file: Path
    rw: Rewrite

    def __str__(self):
        return f"{self.wrap_file.name}: Replace {self.rw.scm} with {self.rw.gh}."


@dataclass
class Cmd:
    cmd: List[str]
    cwd: Path

    def __str__(self):
        pretty_cmd = " ".join([f"'{x}'" for x in self.cmd])
        return f"cd '{self.cwd}' && {pretty_cmd}"


class PushCmd(Cmd):
    pass


class Nop:
    """A command that does nothing but is nice for printing."""

    def __init__(self, description):
        self.desc = description

    def __str__(self):
        return "------ " + self.desc + " ------"


@dataclass
class RepoBranch:
    path: Path
    branch: str


# list of subprojects that should be excluded
excludes = [
    "intel-ecfw-zephyr",
    "libmicrohttpd_orig",
]


mapping = [
    Rewrite(scm="research/ara", gh="luhsra/ara"),
    Rewrite(scm="research/parrot", gh="luhsra/PARROT"),
    Rewrite(scm="research/parrot-projects/ara-libplatforms", gh="luhsra/ara-libplatforms"),
    Rewrite(scm="research/parrot-projects/ara-libsra", gh="luhsra/ara-libsra"),
    Rewrite(scm="research/parrot-projects/ara-posix-apps", gh="luhsra/ara-posix-apps"),
    Rewrite(scm="research/parrot-projects/ara-zephyr-apps", gh="luhsra/ara-zephyr-apps"),
    Rewrite(scm="research/parrot-projects/freertos", gh="luhsra/FreeRTOS"),
    Rewrite(scm="research/parrot-projects/gllvm-meson", gh="luhsra/gllvm-meson"),
    Rewrite(scm="research/parrot-projects/GPSLogger", gh="luhsra/GPSLogger"),
    Rewrite(scm="research/parrot-projects/InfiniTime", gh="luhsra/InfiniTime"),
    Rewrite(scm="research/parrot-projects/infinitime-gllvm", gh="luhsra/infinitime-gllvm"),
    Rewrite(scm="research/parrot-projects/IronOS", gh="luhsra/IronOS"),
    Rewrite(scm="research/parrot-projects/libmicrohttpd", gh="luhsra/libmicrohttpd"),
    Rewrite(scm="research/parrot-projects/librepilot", gh="luhsra/LibrePilot"),
    Rewrite(scm="research/parrot-projects/musl", gh="luhsra/musl-libc"),
    Rewrite(scm="research/parrot-projects/nrf5-sdk", gh="luhsra/nrf5-sdk"),
    Rewrite(scm="research/parrot-projects/toolchains", gh="luhsra/ara-toolchains"),
    Rewrite(scm="research/parrot-projects/zephyrproject-rtos", gh="luhsra/zephyr"),
    Rewrite(scm="research/parrot-projects/zephyr-toolchain", gh="luhsra/zephyr-toolchain"),
]


def get(cmd, cwd=None):
    proc = subprocess.run(cmd, capture_output=True, check=True, cwd=cwd)
    return proc.stdout.decode("UTF-8").strip()


def read_wrap(wrap_file):
    with open(wrap_file) as f:
        return f.read().strip().split("\n")


def rewrite_wrap(wrap_file: WrapRewrite):
    content = read_wrap(wrap_file.wrap_file)
    outp = []
    for line in content:
        if line.startswith('url'):
            outp.append(f"url = {wrap_file.rw.get_gh()}")
        elif line.startswith('revision'):
            outp.append('revision = github')
        else:
            outp.append(line)
    with open(wrap_file.wrap_file, 'w') as f:
        f.write('\n'.join(outp))


def execute(cmd: Cmd, no_push: bool):
    if isinstance(cmd, Nop):
        return
    if no_push and isinstance(cmd, PushCmd):
        print("Not executing push, continuing...")
        return
    print(cmd)
    if isinstance(cmd, WrapRewrite):
        rewrite_wrap(cmd)
    else:
        try:
            subprocess.run(cmd.cmd, check=True, cwd=cmd.cwd)
        except subprocess.CalledProcessError as e:
            print(e)
            inp = input("Do you want to continue? Press 'y' in that case.")
            if inp != 'y':
                raise e


def find_mapping(scm_url):
    for map in mapping:
        if map.scm_matches(scm_url):
            return map
    return None


def get_mapping(repo_path):
    print("get mapping of ", repo_path)
    origin = get(["git", "remote", "get-url", "origin"], cwd=repo_path)
    print("gmo origin", origin)
    return find_mapping(origin)


def switch_branch_back(repo: RepoBranch):
    return [
        Nop(f"Switch back branch of repo: {repo.path}"),
        Cmd(cmd=["git", "switch", repo.branch], cwd=repo.path),
    ]


def prepare_push(repo_path, tag):
    cmds = [
        Nop(f"Make a tag and push the repo: {repo_path}"),
        Cmd(cmd=["git", "tag", "-f", tag], cwd=repo_path),
    ]
    map = get_mapping(repo_path)
    if map is None:
        return []
    remotes = get(["git", "remote"], cwd=repo_path)
    if "github" not in remotes:
        cmds.append(
            Cmd(
                cmd=["git", "remote", "add", "github", map.get_gh(git=True)],
                cwd=repo_path,
            )
        )
    return cmds + [
        PushCmd(cmd=["git", "push", "-f", "github", "github"], cwd=repo_path),
        PushCmd(cmd=["git", "push", "-f", "github", tag], cwd=repo_path),
    ]


def reset_github_branch(repo_path):
    previous = get(["git", "branch", "--show-current"], cwd=repo_path)
    shallow = get(["git", "rev-parse", "--is-shallow-repository"], cwd=repo_path)
    cmds = []
    if shallow == "true":
        cmds = [
            Cmd(cmd=["git", "submodule", "deinit", "--all"], cwd=repo_path),
            Cmd(cmd=["git", "fetch", "--unshallow"], cwd=repo_path),
            Cmd(cmd=["git", "submodule", "update", "--init", "--recursive"], cwd=repo_path),
        ]
    return [
        Nop(f"Reset github branch for repo {repo_path}"),
        *cmds,
        Cmd(cmd=["git", "branch", "-f", "github"], cwd=repo_path),
        Cmd(cmd=["git", "switch", "github"], cwd=repo_path),
    ], RepoBranch(path=repo_path, branch=previous)


def prepare_wrap_rewrite(wrap_file):
    wrap = read_wrap(wrap_file)
    for line in wrap:
        if line.startswith("url"):
            for ma in mapping:
                if ma.scm_matches(line.split('=')[1].strip()):
                    return [
                        Nop(f"Rewrite {wrap_file}"),
                        WrapRewrite(wrap_file=wrap_file, rw=ma),
                        Cmd(cmd=["git", "add", wrap_file.name], cwd=wrap_file.parent),
                        Cmd(
                            cmd=[
                                "git",
                                "commit",
                                "-m",
                                f"Rewrite {wrap_file.name} to Github",
                            ],
                            cwd=wrap_file.parent,
                        ),
                    ]
    return []


def is_git_root(directory: Path):
    if not directory.is_dir():
        return False
    git_root = Path(get(["git", "rev-parse", "--show-toplevel"], cwd=directory))
    if git_root.is_dir() and git_root == directory:
        return True
    return False


def is_wrap_git(file_path: Path):
    if not file_path.is_file():
        return False
    with open(file_path) as f:
        if f.readline() == "[wrap-git]\n":
            return True
    return False


def detect_repos(repo_path):
    repos = set()
    if get_mapping(repo_path):
        repos.add(repo_path)
    wraps = set()
    subprojs = repo_path / "subprojects"
    wraps = set()
    if subprojs.is_dir():
        for subproj in subprojs.iterdir():
            if subproj.name in excludes:
                continue
            if is_git_root(subproj) and get_mapping(subproj):
                sub_repos, sub_wraps = detect_repos(subproj)
                repos |= sub_repos
                wraps |= sub_wraps
            elif is_wrap_git(subproj):
                wraps.add(subproj)
    return repos, wraps


def main():
    main_repo = Path(__file__).parent.parent
    parser = argparse.ArgumentParser(description=sys.modules[__name__].__doc__)
    parser.add_argument(
        "--dry-run", "-d", help="Just show all action but do not do anything."
    )
    parser.add_argument(
        "--no-push", "-n", action="store_true", default=False, help="Execute all commands except of push."
    )
    parser.add_argument(
        "--tag",
        "-t",
        help="Set a specific git tag for this push.",
        required=True,
    )
    parser.add_argument(
        "REPO",
        nargs="?",
        default=main_repo,
        type=Path,
        help="Path of the repo to push. Leave empty to take PARROT.",
    )

    args = parser.parse_args()

    cmds = []
    repos, wraps = detect_repos(args.REPO)
    previous_branches = []
    for repo in repos:
        new_cmds, previous_branch = reset_github_branch(repo)
        cmds += new_cmds
        previous_branches.append(previous_branch)
    for wrap in wraps:
        cmds += prepare_wrap_rewrite(wrap)
    for repo in repos:
        cmds += prepare_push(repo, args.tag)
    for repo in previous_branches:
        cmds += switch_branch_back(repo)
    for cmd in cmds:
        print(cmd)
    if args.dry_run:
        print("Do not execute anything. Exiting...")
        exit()
    input("Please control all commands and press ENTER to continue")
    for cmd in cmds:
        execute(cmd, args.no_push)


if __name__ == "__main__":
    main()
