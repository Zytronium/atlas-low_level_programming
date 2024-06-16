#!/usr/bin/env bash
cd ./preprocessor/
gcc _putchar.c main.c *-*.h -o testRun -Wall -Werror -Wextra -pedantic -std=gnu89
./testRun
rm testRun