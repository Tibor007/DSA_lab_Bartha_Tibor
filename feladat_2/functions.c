//
// Created by Tibor on 2021. 03. 01..
//

#include "functions.h"

float sum(float *array, int n) {
    float summ = 0;
    for (int i = 0; i < n; i++) {
        summ += array[i];
    }
    return summ;
}

float product(float *array, int n) {
    float p = 1;
    for (int i = 0; i < n; ++i) {
        p *= array[i];
    }
    return p;
}

float average(float *array, int n) {
    if (n == 0){
        return 0;
    }
    float ave = 0;
    for (int i = 0; i < n; ++i) {
        ave += array[i];
    }
    return ave/n;
}