cmake_minimum_required(VERSION 3.28)
project(atlas-low-level-programming C)

set(CMAKE_C_STANDARD 90)

add_executable(atlas-low-level-programming
        more_singly_linked_lists/5-free_listint2.c
        more_singly_linked_lists/main.c
        more_singly_linked_lists/0-print_listint.c
        more_singly_linked_lists/3-add_nodeint_end.c
        more_singly_linked_lists/6-pop_listint.c
        more_singly_linked_lists/7-get_nodeint.c)
