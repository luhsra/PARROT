#!/bin/zsh

setopt extended_glob

script_dir=${0:a:h}

cd "$script_dir"/../subprojects
for dir in ^packagecache/; do
	cd $dir
	if [[ -d '.git' ]]; then
		echo "--------- Git status of $dir ----------"
		git status
	else
		echo "--------- $dir (not a git dir) ----------"
	fi
	cd -
done
echo "--------------------------------"
echo "WARNING. This script removes all subprojects and wrap-redirect independent of their state."
echo "Commit all your changes before. I have listed them for you."
read -s -k '?Press any key to continue...'

rm -rf ^packagecache/
for file in *.wrap; do if grep "wrap-redirect" "$file"; then echo $file; rm $file; fi; done
