cmake_minimum_required(VERSION 3.28)
project(atlas-low-level-programming C)

set(CMAKE_C_STANDARD 90)

add_executable(atlas-low-level-programming
        singly_linked_lists/_putchar.c
        singly_linked_lists/2-add_node.c
        singly_linked_lists/0-print_list.c
        singly_linked_lists/3-add_node_end.c
        singly_linked_lists/1-list_len.c
        singly_linked_lists/lists.h)
