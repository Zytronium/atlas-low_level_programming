#!/usr/bin/env bash
cd ./static_libraries/
gcc _putchar.c *-*.c -o testRun -Wall -Werror -Wextra -pedantic -std=gnu89
./testRun
rm testRun