//
// Created by Tibor on 2021. 03. 16..
//

#ifndef LABOR5_1FELADAT_FUNCTIONS_H
#define LABOR5_1FELADAT_FUNCTIONS_H
#include <stdbool.h>

typedef struct {
    int size;
    int *elements;
} IntArray;

IntArray *create(int dimension);

void readFromFile(const char *fileName, IntArray *array);

//Simon Hunor
int maxx(IntArray *array);

//Patka Richard
float atlag(IntArray *array);

//Kiraly David
void reverse(IntArray *array);

//Hodor Robert
int minn(IntArray *array);

//Bartha Tibor
bool neg(IntArray *array);

//Antal Jozsef
int firstimpair(IntArray *array);


#endif //LABOR5_1FELADAT_FUNCTIONS_H
