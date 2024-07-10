cmake_minimum_required(VERSION 3.28)
project(atlas-low-level-programming C)

set(CMAKE_C_STANDARD 90)

add_executable(atlas-low-level-programming
        doubly_linked_lists/0-print_dlistint.c
        doubly_linked_lists/main.c
        doubly_linked_lists/1-dlistint_len.c
        doubly_linked_lists/2-add_dnodeint.c)
