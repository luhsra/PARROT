#!/bin/bash
# helper script to open the most recently created graphs to debug an ara analysis
# make sure xdot is installed
# use killall xdot to close all windows

# Function to display usage information
usage() {
    echo "Usage: $0 [-svf] [-mstg] [-abb] [-bb] [-inst] [-call] [-2] [-3] [-many <#>] [-cp <target-dir>]"
}

# allows to be run from build folder where ninja cmds are executed
path="../build/dumps/"
graphs=()
many=1
count=0
do_cp=false

# Check arguments
while [[ $# -gt 0 ]]; do
    arg="$1"
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
		-hstg)
            graphs+=("HyperSSE*.hstg.dot")
            shift
            ;;
		-hstg+)
            graphs+=("HyperSSE*.hstg.dot")
            graphs+=("HyperSSE*.reduced.dot" "HyperSSE*.sps.dot")
            shift
            ;;
		-mstg+)
            graphs+=("MultiSSE*.mstg.dot")
            graphs+=("MultiSSE*.reduced.dot" "MultiSSE*.sps.dot")
            shift
            ;;
		-bb)
			graphs+=("DumpCFG*.bbs.dot")
            shift
            ;;
        -abb)
			graphs+=("DumpCFG*.abbs.dot")
            shift
            ;;
        -inst)
			graphs+=("DumpInstances*.dot")
            shift
            ;;
        -call)
			graphs+=("DumpCallgraph*.complete.dot" "DumpCallgraph*.syscalls.dot")
            shift
            ;;
		-2)
			many=2
            shift
            ;;
		-3)
			many=3
            shift
            ;;
        -many)
            shift
            if [[ $# -eq 0 ]]; then
                echo "-many: needs number of most recent files!"
                usage
                exit 1
            fi
            many="$1"
            if [[ many -le 0 ]]; then
                echo "-many: $many is invalid!"
                usage
                exit 1
            fi
            shift
            ;;
        -cp)
            shift # Get to next param
            if [[ $# -eq 0 ]]; then
                echo "-cp: need target param (e.g. ~/Desktop/sra-repos/parrot/subprojects/ara/appl/AUTOSAR/singlecore/examples/)!"
                usage
                exit 1
            fi
            target="$1"
            if [[ ! -d $target ]]; then
                echo "-cp: $target does not exist!"
                usage
                exit 1
            fi
            do_cp=true
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


echo ""
for i in "${!graphs[@]}"; do
	graph=${graphs[$i]}
	echo "Matching: ${path}${graph}"
	read -d '' -r -a recent_files < <(ls -t ${path}${graph} 2>/dev/null)

    for (( m=0; m<many; m++ )); do

        if [ ${#recent_files[@]} -gt $m ]; then
            most_recent=${recent_files[$m]}
            echo "$m: $most_recent"
            count=$((count + 1))

            if $do_cp; then
                trimmed="${most_recent%.*}"
                dot -Tsvg "$most_recent" > "$trimmed.svg"
                cp $trimmed.* "$target"
                echo "Copied to $target"
            else
                xdot "$most_recent" > /dev/null 2>&1 &
            fi
        else
            echo "$m: no file found matching pattern $graph"
	    fi
    done
done

echo ""
echo "Showed ${count} graphs."
