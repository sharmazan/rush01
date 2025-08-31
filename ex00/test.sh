#!/usr/bin/env bash

clear

echo "Norm"
norminette *.c

cc -Wall -Wextra -Werror -o rush01 *.c

if [[ !$? ]]; then
	echo "Compilation is OK"
	./rush01 "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2"
fi

