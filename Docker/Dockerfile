# SPDX-FileCopyrightText: 2022 Björn Fiedler <fiedler@sra.uni-hannover.de>
# SPDX-FileCopyrightText: 2024 Andreas Kässens <kaessens@sra.uni-hannover.de>
#
# SPDX-License-Identifier: GPL-3.0-or-later

from debian:bookworm-backports
ENV DEBIAN_FRONTEND=noninteractive
ENV TZ=Europe/Berlin

# graph tool is not installed to /usr/include
ENV CPATH=/usr/lib/python3/dist-packages/graph_tool/include

# go packages go here
ENV GOBIN=/usr/local/bin/

RUN apt update && apt-get install -qq\
	clang clang-14 clang-format-14 llvm-14-dev lld-14\
	python3 python3-pip tmux build-essential ninja-build git\
	binutils-arm-none-eabi libnewlib-arm-none-eabi libstdc++-arm-none-eabi-newlib\
	binutils-riscv64-unknown-elf gcc-riscv64-unknown-elf libstdc++-12-dev-riscv64-cross\
	bash-completion gdb-multiarch pkg-config z3 graphviz\
	libsparsehash-dev gperf cmake g++-multilib libboost-python-dev libboost-graph-dev\
	python3-serial python3-matplotlib python3-pydot python3-pykwalify python3-pyelftools\
	npm device-tree-compiler autoconf file golang\
	stlink-tools qemu-system\
	python3-graph-tool -t bookworm-backports

# https://peps.python.org/pep-0668/
RUN	rm /usr/lib/python3.11/EXTERNALLY-MANAGED

# meson version in debian is too old
RUN pip3 install meson==1.5.1 versuchung Cython
# compatibility with apt installed cython
RUN ln -s /usr/local/bin/cython /usr/bin/cython3

# gllvm must be installed via go package manager
RUN go install github.com/SRI-CSL/gllvm/cmd/...@master

RUN apt-get install -qq cloc
CMD ["bash"]
