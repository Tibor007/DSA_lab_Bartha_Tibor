cmake_minimum_required(VERSION 3.19)
project(parcialis_m C)

set(CMAKE_C_STANDARD 99)

add_executable(parcialis_m main.c functions.c functions.h)