//
// Created by Tibor on 2021. 04. 13..
//

#include "tomb_parcialis_gyakorlas.h"
#include <stdio.h>
#include <stdlib.h>

IntArray *letrehozasArray(int meret) {
    IntArray *array = (IntArray *) malloc(sizeof(IntArray));
    if (array == NULL) {
        printf("Hiba");
        return NULL;
    }
    array->meret = meret;
    array->szamok = (int *) malloc(array->meret * sizeof(int));

    if (array == NULL) {
        printf("Hiba");
        free(array);
        return 0;
    }
    return array;
}

void putArray(IntArray **array) {
    IntArray *array1 = letrehozasArray(20);
    int j = 0;

    for (int i = 0; i < array1->meret; ++i) {
        array1->szamok[i] = j;
        j = j + 2;
    }
    *array = array1;
}



void kiiratas(IntArray *array) {
    printf("A tomb: ");
    for (int i = 0; i < array->meret; i++) {
        printf("%i ", array->szamok[i]);
    }

}