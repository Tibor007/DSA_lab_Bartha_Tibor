//
// Created by Tibor on 2021. 03. 06..
//

#include "functions.h"
#include <stdio.h>

void printInHour(unsigned int seconds) {
    unsigned int h = seconds / 3600;
    unsigned int m = (seconds - (3600 * h)) / 60;
    unsigned int s = (seconds - (3600 * h)) - (m * 60);

    printf("%u : %u : %u", h, m, s);
}