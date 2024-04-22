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

RUN apt update && apt-get install -y\
	clang-14 clang-format-14 llvm-14-dev lld-14\
	python3 python3-pip tmux build-essential ninja-build git\
	binutils-arm-none-eabi libnewlib-arm-none-eabi libstdc++-arm-none-eabi-newlib\
	binutils-riscv64-unknown-elf gcc-riscv64-unknown-elf libstdc++-12-dev-riscv64-cross\
	bash-completion gdb-multiarch pkg-config z3 graphviz\
	libsparsehash-dev gperf cmake g++-multilib libboost-python-dev libboost-graph-dev\
	python3-serial python3-matplotlib python3-pydot cython3\
	python3-graph-tool npm device-tree-compiler autoconf file golang\
	stlink-tools

# https://peps.python.org/pep-0668/
RUN	rm /usr/lib/python3.11/EXTERNALLY-MANAGED

# meson version in debian is too old
RUN pip3 install meson>=1.4.0 versuchung

# gllvm must be installed via go package manager
RUN go install github.com/SRI-CSL/gllvm/cmd/...@master

CMD ["bash"]
