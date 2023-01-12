
# Download and setup the Zephyr project
#
# Usage:
# ./init_zephyr_toolchain.sh <meson build dir> <zephyr toolchain install dir>
#
# The default <meson build dir> is build
# The default <zephyr toolchain install dir> is <meson build dir>/zephyrproject

# Make sure that this file will be executed in the dir of that file
cd "$(dirname "$0")" || exit

# retrieve commandline arguments
if [ "x$1" = "x" ] ; then
	MESON_BUILD=build
	ZEPHYR_PROJECT=${MESON_BUILD}/zephyrproject
else
	MESON_BUILD=$1
	if [ "x$2" = "x" ] ; then
		ZEPHYR_PROJECT=${MESON_BUILD}/zephyrproject
	else
		ZEPHYR_PROJECT=$2
	fi
fi

readonly MESON_BUILD=$(pwd)/${MESON_BUILD}
readonly ZEPHYR_PROJECT=$(pwd)/${ZEPHYR_PROJECT}
echo "Meson build is ${MESON_BUILD}"
echo "install zephyr toolchain in ${ZEPHYR_PROJECT}"


# Make sure that zephyr Repo is up to date
./init

# Install west
pip3 install --user -U west
echo 'export PATH=~/.local/bin:"$PATH"' >> ~/.bashrc
source ~/.bashrc

# Get Zephyr code:
west init ${ZEPHYR_PROJECT}
cd ${ZEPHYR_PROJECT}
west update
west zephyr-export

# install Requirements to the system
pip3 install --user -r zephyr/scripts/requirements.txt

# Replace Zephyr directory by our Zephyr ARA Repo
rm -rf zephyr
git clone -b ara git@scm.sra.uni-hannover.de:research/zephyrproject-rtos.git zephyr
west update

# Set zephyr_dir in Meson build
cd ${MESON_BUILD}
meson configure -D zephyr_dir=${ZEPHYR_PROJECT}
