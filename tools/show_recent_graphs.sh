#!/bin/bash
# helper script to open the most recently created graphs to debug an ara analysis
# make sure xdot is installed
# use killall xdot to close all windows

# Function to display usage information
usage() {
    echo "Usage: $0 [-svf] [-mstg] [-abbs] [-bbs] [-inst] [-call] [-2] [-3] [-cp <directory>]"
}

path="../build/dumps/"
graphs=()
show_second=false
show_third=false
copy_path="../../ma_mareike_burg/fig"   # hardcoded!
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
        -cp)
            shift # Get to next param
            if [[ $# -eq 0 ]]; then
                echo "No directory for -cp"
                usage
                exit 1
            fi
            copy_name="$1"
            full_copy_path="${copy_path}/${copy_name}/"
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


echo "Current path is: $(pwd)"
if [[ -n "${full_copy_path}" ]]; then
    echo "Copy to $full_copy_path"
    mkdir -p "$full_copy_path"
fi

echo ""

count=0
for i in "${!graphs[@]}"; do
	graph=${graphs[$i]}
	echo "Matching: ${path}${graph}"
	read -d '' -r -a recent_files < <(ls -t ${path}${graph} 2>/dev/null)

	if [ ${#recent_files[@]} -gt 0 ]; then
		most_recent=${recent_files[0]}
		xdot "$most_recent" > /dev/null 2>&1 &
		echo "1: $most_recent"
		count=$((count + 1))

        if [[ -n "${full_copy_path}" ]]; then
            modified_name_a=$(echo "$most_recent" | cut -d '/' -f4 | cut -d '.' -f1)
            modified_name_b=$(echo "$most_recent" | cut -d '/' -f4 | cut -d '.' -f3,4,5,6,7,8)
            trimmed_name=$(echo "$copy_name" | tr -d "/")
            new_name="${modified_name_a}.${trimmed_name}.${modified_name_b}"
            cp "$most_recent" "${copy_path}/${copy_name}/${new_name}"
            echo "Copied to ${new_name}"
        fi

		if $show_second && [ ${#recent_files[@]} -gt 1 ]; then
			second_most_recent=${recent_files[1]}
			xdot "$second_most_recent" > /dev/null 2>&1 &
			echo "2: $second_most_recent"
			count=$((count + 1))

            if [[ -n "${full_copy_path}" ]]; then
                modified_name_a=$(echo "$second_most_recent" | cut -d '/' -f4 | cut -d '.' -f1)
                modified_name_b=$(echo "$second_most_recent" | cut -d '/' -f4 | cut -d '.' -f3,4,5,6,7,8)
                trimmed_name=$(echo "$copy_name" | tr -d "/")
                new_name="${modified_name_a}.${trimmed_name}.${modified_name_b}"
                cp "$second_most_recent" "${copy_path}/${copy_name}/${new_name}"
                echo "Copied to ${new_name}"
            fi
		fi

		if $show_third && [ ${#recent_files[@]} -gt 2 ]; then
			third_most_recent=${recent_files[2]}
			xdot "$third_most_recent" > /dev/null 2>&1 &
			echo "3: $third_most_recent"
			count=$((count + 1))

            if [[ -n "${full_copy_path}" ]]; then
                modified_name_a=$(echo "$third_most_recent" | cut -d '/' -f4 | cut -d '.' -f1)
                modified_name_b=$(echo "$third_most_recent" | cut -d '/' -f4 | cut -d '.' -f3,4,5,6,7,8)
                trimmed_name=$(echo "$copy_name" | tr -d "/")
                new_name="${modified_name_a}.${trimmed_name}.${modified_name_b}"
                cp "$third_most_recent" "${copy_path}/${copy_name}/${new_name}"
                echo "Copied to ${new_name}"
            fi
		fi
	else
		echo "No file found matching pattern $graph"
	fi
done

echo ""
echo "Showed ${count} graphs."
