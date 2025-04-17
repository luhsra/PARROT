#!/bin/bash
# helper script to open the most recently created graphs to debug an ara analysis
# make sure xdot is installed
# use killall xdot to close all windows

# Function to display usage information
usage() {
    echo "Usage: $0 [-svf] [-mstg] [-abbs] [-bbs] [-inst] [-call] [-2]"
}

path="../build/dumps/"
graphs=()
show_second=false
show_third=false
# Check arguments
for arg in "$@"; do
    case $arg in
        -svf)
            graphs+=("SVFAnalyses*.svfg.dot" "SVFAnalyses*.svf-callgraph.dot" "SVFAnalyses*.svf-icfg.dot")
            shift
            ;;
		-mstg)
            graphs+=("MultiSSE*.mstg.dot")
            # graphs+=("MultiSSE*.reduced.dot" "MultiSSE*.sps.dot")
            shift
            ;;
		-mstg+)
            graphs+=("MultiSSE*.mstg.dot")
            graphs+=("MultiSSE*.reduced.dot" "MultiSSE*.sps.dot")
            shift
            ;;
		-bbs)
			graphs+=("DumpCFG*.bbs.dot")
            shift
            ;;
        -abbs)
			graphs+=("DumpCFG*.abbs.dot")
            shift
            ;;
        -inst)
			graphs+=("DumpInstances*.dot")
            shift
            ;;
        -call)
			graphs+=("DumpCallgraph*..complete.dot" "DumpCallgraph*..syscalls.dot")
            shift
            ;;
		-2)
			show_second=true
            shift
            ;;
		-3)
			show_second=true
			show_third=true
            shift
            ;;
        -h|--help)
            usage
            exit 0
            ;;
        *)
            echo "Unknown option: $arg"
            usage
            exit 1
            ;;
    esac
done

count=0
for i in "${!graphs[@]}"; do
	graph=${graphs[$i]}
	echo "${path}${graph}"
	read -d '' -r -a recent_files < <(ls -t ${path}${graph} 2>/dev/null)

	if [ ${#recent_files[@]} -gt 0 ]; then
		most_recent=${recent_files[0]}
		xdot "$most_recent" > /dev/null 2>&1 &
		echo "1: $most_recent"
		count=$((count + 1))

		if $show_second && [ ${#recent_files[@]} -gt 1 ]; then
			second_most_recent=${recent_files[1]}
			xdot "$second_most_recent" > /dev/null 2>&1 &
			echo "2: $second_most_recent"
			count=$((count + 1))
		fi

		if $show_third && [ ${#recent_files[@]} -gt 2 ]; then
			third_most_recent=${recent_files[2]}
			xdot "$third_most_recent" > /dev/null 2>&1 &
			echo "3: $third_most_recent"
			count=$((count + 1))
		fi
	else
		echo "No file found matching pattern $graph"
	fi
done

echo "Current dir is: $(pwd)"
echo "Showed ${count} graphs."
