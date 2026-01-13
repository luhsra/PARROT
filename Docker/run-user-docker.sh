#!/bin/bash

# SPDX-FileCopyrightText: 2022 Björn Fiedler <fiedler@sra.uni-hannover.de>
# SPDX-FileCopyrightText: 2024 Andreas Kässens <kaessens@sra.uni-hannover.de>
#
# SPDX-License-Identifier: GPL-3.0-or-later

export uid=$(id -u)
export gid=$(id -g)

# create docker container: docker build -t scm.sra.uni-hannover.de:5050/research/parrot .

docker run --rm -it \
	--user $uid:$gid  \
	--env=USER="$USER" \
	--workdir "$(pwd)" \
	--volume "/etc/group:/etc/group:ro"\
	--volume "/etc/passwd:/etc/passwd:ro"\
	--volume "/etc/shadow:/etc/shadow:ro"\
	--volume "$HOME:$HOME:rw" \
	--name parrot-dev \
	scm.sra.uni-hannover.de:5050/research/parrot
