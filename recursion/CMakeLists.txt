cmake_minimum_required(VERSION 3.28)
project(.)

set(CMAKE_C_STANDARD 90)

add_executable(recursion main.c _putchar.c 1-print_rev_recursion.c 2-strlen_recursion.c 3-factorial.c 4-pow_recursion.c 5-sqrt_recursion.c 6-is_prime_number.c)
