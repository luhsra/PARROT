#!/bin/zsh

script_dir=${0:a:h}

cd "$script_dir"/../subprojects
rm -rf *(/)
for file in *.wrap; do if grep "wrap-redirect" "$file"; then echo $file; rm $file; fi; done
