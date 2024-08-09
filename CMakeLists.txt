cmake_minimum_required(VERSION 3.28)
project(atlas-low-level-programming C)

set(CMAKE_C_STANDARD 90)

add_executable(atlas-low-level-programming
        search_algorithms/search_algos.h
        search_algorithms/0-linear.c
        search_algorithms/main.c
        search_algorithms/1-binary.c
)
