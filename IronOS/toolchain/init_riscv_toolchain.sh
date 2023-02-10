#!/bin/bash
# Download and setup our RISCV toolchain
#
# Usage:
# ./init_riscv_toolchain.sh <riscv toolchain install dir> <make path> <git path> <path to clone RISCV toolchain repository>
#
# The default <riscv toolchain install dir> is ~/riscv-toolchain-install
# The default <make path> is make
# The default <git path> is git
# The default <path to clone RISCV toolchain repository> is ~/riscv-gnu-toolchain
#
# Recommend to use the run target init_riscv_toolchain.sh instead of calling this script by your own

# Stop this script on error
set -e

# retrieve commandline arguments
readonly INSTALL_DIR=${1:-~/riscv-toolchain-install}
readonly MAKE=${2:-make}
readonly GIT=${3:-git}
readonly CLONE_IN_DIR=${4:-~/riscv-gnu-toolchain}

git clone --recursive https://github.com/riscv-collab/riscv-gnu-toolchain.git ${CLONE_IN_DIR}
cd ${CLONE_IN_DIR}
git submodule update --init --recursive
./configure --prefix=${RISCV_TOOLCHAIN} --with-arch=rv32imac --with-abi=ilp32
make linux -j$(nproc)

# build newlib because IronOS Makefile requires it
make stamps/build-newlib -j$(nproc)
