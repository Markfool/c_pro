cmake_minimum_required(VERSION 3.18)
project(first_work C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(first_work
        hello.c
        main.c)
