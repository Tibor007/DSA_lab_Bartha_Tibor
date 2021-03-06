//
// Created by Tibor on 2021. 03. 01..
//

#include "functions.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>


void printArray(int *array, int n) {
    printf("A tomb: ");
    for (int i = 0; i < n; i++)
        printf("%i ", array[i]);
    printf("\n");
}

void fillArray(int *array, int n, int max) {
    for (int i = 0; i < n; i++)
        array[i] = i+1;
}

int linearSearch(int *array, int n, int number) {


    int foundIndex = -1;

    for (int i = 0; i < n && foundIndex == -1; i++)
        if (array[i] == number) {
            foundIndex = i;

        }
}