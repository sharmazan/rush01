#!/usr/bin/env bash
# stops if there is an error on any step
# set -e

# show running commands
# set -x

clear

echo "Norm"
norminette *.c

cc -Wall -Wextra -Werror -o rush01 *.c

if [[ !$? ]]; then
	echo "Compilation is OK"
	set -x
	./rush01 "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2"
fi

