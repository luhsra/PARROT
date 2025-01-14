#!/bin/bash
# helper script to open the most recently created graphs to debug an ara analysis
# make sure xdot is installed
# use killall xdot to close all windows
path="build/dumps/"
graphs=(
	"DumpCFG*..abbs.dot"
	"DumpCFG*..bbs.dot"
	"DumpCallgraph*..complete.dot"
	"DumpCallgraph*..syscalls.dot"
	"DumpInstances*..dot"
	"MultiSSE*.mstg.dot"
	"MultiSSE*.reduced.dot"
	"MultiSSE*.sps.dot"
)
echo "$(pwd)"
echo "Trying to open: ${graphs[@]}"
for i in "${!graphs[@]}"; do
	graph=${graphs[$i]}
	echo "${path}${graph}"
	most_recent=$(ls -t ${path}${graph} 2>/dev/null | head -n 1)
	if [ -n "$most_recent" ]; then
		xdot "$most_recent" &
	else
		echo "No file found matching pattern $graph"
	fi
done
