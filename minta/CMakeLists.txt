cmake_minimum_required(VERSION 3.19)
project(minta C)

set(CMAKE_C_STANDARD 99)

add_executable(minta main.c 1es_feladat/Stack.c 1es_feladat/Stack.h 2_feladat/BinarySearchTree.c 2_feladat/BinarySearchTree.h)