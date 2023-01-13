#!/bin/bash
# Download and setup the Zephyr project
#
# Usage:
# ./init_zephyr_toolchain.sh <zephyr toolchain install dir> <python path> <pip path> <git path>
#
# relative paths for <zephyr toolchain install dir> start from home directory $HOME 
# The default <zephyr toolchain install dir> is zephyrproject (relative path from home)
# The default <python path> is python3
# The default <pip path> is pip
# The default <git path> is git
#
# Recommend to use the run target init_zephyr_toolchain.sh instead of calling this script by your own

# Make sure that this file will be executed in the dir of that file
cd "$(dirname "$0")" || exit

# Stop this script on error
set -e

# retrieve commandline arguments
ZEPHYR_PROJECT=${1:-zephyrproject}
readonly PYTHON=${2:-python3}
readonly PIP=${3:-pip}
readonly GIT=${4:-git}

# handle relative paths for ZEPHYR_PROJECT:
case ${ZEPHYR_PROJECT} in
  /*) readonly ZEPHYR_PROJECT ;;
  *) readonly ZEPHYR_PROJECT=$HOME/${ZEPHYR_PROJECT} ;;
esac

readonly ARA_INSTALLED_TOOLS=${ZEPHYR_PROJECT}/ara_installed_tools
readonly WEST="${PYTHON} ${ARA_INSTALLED_TOOLS}/west"
echo "install zephyr toolchain in ${ZEPHYR_PROJECT}"
echo "python path: ${PIP}"
echo "pip path: ${PIP}"
echo "git path: ${GIT}"

# Make sure that zephyr Repo is up to date
../../init

# Check if zephyr toolchain is already finished
if [ -e ${ZEPHYR_PROJECT} ] ; then
	cd ${ZEPHYR_PROJECT}
	if [ -e ara_toolchain_ready ] ; then
		echo "zephyr toolchain is already finished!"
		echo "Deleting and rebuilding..."
	fi
	cd ..
	rm -rf ${ZEPHYR_PROJECT}
	cd "$(dirname "$0")" || exit
fi


# Install west
mkdir -p ${ZEPHYR_PROJECT}
mkdir -p ${ARA_INSTALLED_TOOLS}
${PIP} install west --target=${ARA_INSTALLED_TOOLS}
#echo "export PATH=${ARA_INSTALLED_TOOLS}:${PATH}" >> ~/.bashrc
#source ~/.bashrc

# Get Zephyr code:
${WEST} init ${ZEPHYR_PROJECT}
cd ${ZEPHYR_PROJECT}
${WEST} update
${WEST} zephyr-export

# install Requirements to the system
${PIP} install -r zephyr/scripts/requirements.txt --target=${ARA_INSTALLED_TOOLS}

# Replace Zephyr directory by our Zephyr ARA Repo
rm -rf zephyr
${GIT} clone -b ara git@scm.sra.uni-hannover.de:research/zephyrproject-rtos.git zephyr
${WEST} update

# Signal zephyr-apps that zephyr project is ready
touch ara_toolchain_ready
