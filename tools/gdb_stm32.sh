#!/bin/bash

tmux new-session \
st-util ';' \
new-window \
"arm-none-eabi-gdb ${1} -ex 'target extended-remote :4242' - ex 'source ../subprojects/ara-libplatforms//platform/stm32/tools/.gdbinit'" ';'
pkill st-util
