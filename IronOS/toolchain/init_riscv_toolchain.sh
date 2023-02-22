#!/bin/bash
# Download and setup our RISCV toolchain
#
# Usage:
# ./init_riscv_toolchain.sh <riscv toolchain install dir> <path to clone RISCV toolchain repository in> <make path> <git path>
#
# The default <riscv toolchain install dir> is ~/riscv-toolchain-install
# The default <path to clone RISCV toolchain repository in> is ~/riscv-gnu-toolchain
# The default <make path> is make
# The default <git path> is git
#
# Recommend to use the run target init_riscv_toolchain instead of calling this script by your own

# Stop this script on error
set -e

# retrieve commandline arguments
readonly INSTALL_DIR=${1:-~/riscv-toolchain-install}
readonly CLONE_IN_DIR=${4:-~/riscv-gnu-toolchain}
readonly MAKE=${2:-make}
readonly GIT=${3:-git}

${GIT} clone --recursive https://github.com/riscv-collab/riscv-gnu-toolchain.git ${CLONE_IN_DIR}
cd ${CLONE_IN_DIR}
${GIT} submodule update --init --recursive
mkdir -p ${INSTALL_DIR}
./configure --prefix=${INSTALL_DIR} --with-arch=rv32imac --with-abi=ilp32
${MAKE} linux -j$(nproc)

# build newlib because IronOS Makefile requires it
${MAKE} stamps/build-newlib -j$(nproc)
