//
// Created by Tibor on 2021. 04. 13..
//

#ifndef UNTITLED_TOMB_PARCIALIS_GYAKORLAS_H
#define UNTITLED_TOMB_PARCIALIS_GYAKORLAS_H

typedef struct {
    int meret;
    int *szamok;
} IntArray;

IntArray *letrehozasArray(int meret);

void putArray(IntArray **array);

void kiiratas(IntArray *array);

#endif //UNTITLED_TOMB_PARCIALIS_GYAKORLAS_H
