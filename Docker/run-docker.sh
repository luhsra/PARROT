#!/bin/bash

# SPDX-FileCopyrightText: 2022 Björn Fiedler <fiedler@sra.uni-hannover.de>
# SPDX-FileCopyrightText: 2025 Andreas Kässens <kaessens@sra.uni-hannover.de>
#
# SPDX-License-Identifier: GPL-3.0-or-later

# create docker container: podman build -t scm.sra.uni-hannover.de:5050/research/parrot .

docker run --rm -it \
	--volume "$HOME:$HOME:rw" \
	--volume "$(pwd):$(pwd):rw"\
	--volume "$HOME/.ssh:/root/.ssh:ro"\
	--workdir "$(pwd)" \
	--name parrot-dev \
	scm.sra.uni-hannover.de:5050/research/parrot
