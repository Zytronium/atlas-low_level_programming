cmake_minimum_required(VERSION 3.28)
project(atlas-low-level-programming C)

set(CMAKE_C_STANDARD 90)

add_executable(atlas-low-level-programming
        function_pointers/3-op_functions.c
        function_pointers/3-main.c
        function_pointers/3-get_op_func.c
        function_pointers/3-calc.h
        function_pointers/_putchar.c)
