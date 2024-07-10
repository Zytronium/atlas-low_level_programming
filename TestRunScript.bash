#!/usr/bin/env bash
cd ./doubly_linked_lists/ || exit
gcc main.c *-*.c -o testRun -Wall -Werror -Wextra -pedantic -std=gnu89
if ! test -f ./testRun
then
  echo "Couldn't compile."
  exit
fi
echo
./testRun
echo
rm testRun
