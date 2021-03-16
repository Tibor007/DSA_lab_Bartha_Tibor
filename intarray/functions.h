//
// Created by Tibor on 2021. 03. 16..
//

#ifndef INTARRAY_FUNCTIONS_H
#define INTARRAY_FUNCTIONS_H
typedef struct {
    int size;
    int *elements;
} IntArray;

IntArray *createArray(int dimension);

int findElement(IntArray *array, int element);

int minimum(IntArray *array);

int maximum(IntArray *array);

void readArray(const char *fileName, IntArray **array);

void fillArray(IntArray *array, int dimension, int first, int last);

void printArray(IntArray *array);

void printArrayToFile(const char *fileName, IntArray *array);

void sortArray(IntArray *array);

void deleteElement(IntArray *array, int element);

void copy(IntArray *arrayTo, IntArray *arrayFrom);

int seged(const void *a, const void *b);

int linearSearch(IntArray *array, int element);

int binarySearch(IntArray *array, int start, int end, int element);

#endif //INTARRAY_FUNCTIONS_H
