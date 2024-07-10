cmake_minimum_required(VERSION 3.28)
project(atlas-low-level-programming C)

set(CMAKE_C_STANDARD 90)

add_executable(atlas-low-level-programming
        file_io/main.h
        file_io/0-read_textfile.c
        file_io/0-read_textfile.c
        file_io/0-main.c
        file_io/1-create_file.c
        file_io/2-append_text_to_file.c)
