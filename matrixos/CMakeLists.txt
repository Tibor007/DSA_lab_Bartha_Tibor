cmake_minimum_required(VERSION 3.17)
project(matrixos C)

set(CMAKE_C_STANDARD 99)

add_executable(matrixos main.c functions.c functions.h)