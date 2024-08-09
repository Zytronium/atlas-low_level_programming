# C - Search Algorithms
###### I need an algorithm to search for projects in this repo

---
## Compiling and Running (Linux/WSL with Bash):

Note: You must have gcc installed. If any bash script says it can't run
due to permission issues or an issue on line 1, try changing the first line
to one of the following:

- #!/usr/bin/env bash
- #!/usr/bin/bash
- #!/bin/env bash
- #!/bin/bash

### How to compile and run in one command:
- Assuming you're in the `atlas-low_level_programming/search_algorithms` dir,
run `TestRunScript.bash` with this command: `./TestRunScript.bash`. This will
also print the exit code when the program ends, and then delete the executable
that it compiled and ran. Adding 'valgrind' to the end of the command will run
the program with Valgrind memcheck.

### Methods to compile only:
- Method 1. Assuming you're in the `atlas-low_level_programming/search_algorithms` dir,
run CompileAll.bash. `./CompileAll.bash`.

- Method 2. Assuming you're in the `atlas-low_level_programming/search_algorithms` dir,
run this gcc command: `gcc -ggdb3 *.c -o testRun -Wall -Wextra -pedantic -std=gnu89`

If you're still having permission issues, try `chmod u+x CompileAll.bash`

### Methods to run only (after compiling):
- Method 1. Run `RunScript.bash` with this command: `./RunScript.bash`.  This
will also print the exit code when the program ends. Adding 'valgrind' to the
end of the command will run the program with Valgrind memcheck.

- Method 2. Run the file it compiled. `./testRun`

---

### Project Description and Concepts

Search algorithms are algorithms that search for a given element in a list
of items. There are a couple different widely used search algorithms (or at
the ones used in this project), which are Linear and Binary. Linear search
algorithms simply search one by one in order from the beginning to end until
they find the given item or reach the end of the list. Binary search algorithms
are usually faster because they perform fewer operations to find the average
item, assuming the list is pre-sorted from least to greatest. Binary search
algorithms move by half of the remaining list, check if the value is equal,
less than, or greater than the value its searching for, and repeats.
