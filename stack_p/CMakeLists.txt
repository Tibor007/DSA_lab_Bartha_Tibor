cmake_minimum_required(VERSION 3.19)
project(stack_p C)

set(CMAKE_C_STANDARD 99)

add_executable(stack_p main.c functions.c functions.h)