cmake_minimum_required(VERSION 3.28)
project(atlas-low-level-programming C)

set(CMAKE_C_STANDARD 90)

add_executable(atlas-low-level-programming preprocessor/main.c
        structures_typedef/1-init_dog.c
        structures_typedef/dog.h)
