#!/usr/bin/bash
cd ./recursion/
gcc main.c _putchar.c *-*.c -o testRun -Wall -Werror -Wextra -pedantic -std=gnu89
./testRun
rm testRun