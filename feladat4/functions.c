//
// Created by Tibor on 2021. 03. 01..
//

#include "functions.h"
#include <stdio.h>

void inverse(float *array, int n) {
    for (int i = n-1; i >=0 ; --i) {
        printf("%f,", array[i]);
    }
}