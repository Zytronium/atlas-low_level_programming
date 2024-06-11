#!/usr/bin/env bash
cd ./recursion/
gcc _putchar.c main.c *-*.c -o testRun -Wall -Werror -Wextra -pedantic -std=gnu89
./testRun
rm testRun