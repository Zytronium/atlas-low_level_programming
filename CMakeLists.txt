cmake_minimum_required(VERSION 3.28)
project(atlas-low-level-programming C)

set(CMAKE_C_STANDARD 90)

add_executable(atlas-low-level-programming
        hash_tables/hash_tables.h
        hash_tables/main.c
        hash_tables/0-hash_table_create.c
        hash_tables/1-djb2.c
        hash_tables/2-key_index.c
        hash_tables/3-hash_table_set.c
)
