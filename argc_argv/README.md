# argc & argv
argc is a parameter that gives you the number of arguments supplied to main (ARG ument C ount)
argc is always at least 1, for the reason explained below.

argv is a parameter that lets you supply many arguments as strings (char arrays). argc gives you the size of argv.
argv always contains the name of the program, or more accurately, the path used in the command to execute it (?) like "./0-program" or "./argc_argv/0-program".
This is why argc is always at least 1. 

argv[0] gives you the first parameter, as an index of 0 does with anny array in C, and therefore argv[argc] is out of bounds, but argv[argc - 1] gives you the argc-th (last) argument in argv, and argv[1] gives you the second, which is the first argument you manually supply.
For example, if you run the function with `./function hello world 123456`, argv[1] will be "hello", argv[0] will be "./function", and argv[argc - 1] will be "123456" as a string.
Arguments in the parameter argv will always be strings, and must use double quotes to use multiple words as one argument, since arguments are otherwise separated by a space in this way.
If you do `./function 2 + 5` and your function searches for numbers and operators like `+` and `-`, you'll need to convert "2" and "5" from strings to integers, which is probably pretty simple for just 1-digit numbers, but more complex for multiple digits.
