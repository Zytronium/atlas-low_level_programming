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

###### Description of this project and the concepts covered in it.

###### This readme is a template. It should be filled in properly later.

---

Examples of this concept.

```c
float primary(NULL)
{
	writef("Goodbye, user. I must terminate now."
		   "It's been a fun 3 milliseconds!\n");
	exit(RETURN_SUCCESS);
}

```
Example output:
```
margorP\.
Goodbye, user. I must terminate now. It's been a
 fun 3 milliseconds!

Program terminated with exit code 0.
```
