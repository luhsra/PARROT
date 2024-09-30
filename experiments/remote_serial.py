#!/usr/bin/env python3
import serial
import re

MAX_RUNS = REPLACE_WITH_RUNS
GOOD = re.compile(r"[a-z]+\[.*?\]=\d+")

lines = 0
run = 0
should_print = False
with serial.Serial("/dev/ttyUSB0", 115200, timeout=10) as ser:
    while lines <= 10000 and run <= MAX_RUNS:
        line = ser.readline().strip(b"\r\n").decode("UTF-8")
        print("RAW", line)
        if line.startswith("RPi: BOOTLOADER"):
            print("NEWRUN")
            should_print = True
            run += 1
        if should_print and GOOD.fullmatch(line):
            print(line)
        lines += 1
