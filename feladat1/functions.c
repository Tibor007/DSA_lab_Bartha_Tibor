//
// Created by Tibor on 2021. 02. 26..
//

#include "functions.h"
int legnagyobb_szam(int a, int b, int c) {
    int max_1 = (a > b) ? a : b;
    int max_2 = (max_1 > c) ? max_1 : c;

    return max_2;
}

int legkisebb_szam(int a, int b, int c) {
    int min_1 = (a < b) ? a : b;
    int min_2 = (min_1 < c) ? min_1 : c;

    return min_2;
}