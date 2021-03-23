//
// Created by Tibor on 2021. 03. 16..
//

#include "functions.h"
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

IntArray* create(int dimension){
    IntArray *intarray = malloc( sizeof(IntArray));

    intarray->size = dimension;
    intarray->elements = (int*)calloc(dimension, sizeof(int));

    return intarray;
}

void readFromFile(const char *fileName,IntArray **array){
    FILE *f=fopen(fileName,"rt");
    if(!f){
        printf("Error:Canno't open file:%s\n",fileName);
        return;
    }
    int n;
    fscanf(f,"%i",&n);
    IntArray *tempA=create(n);
    if(tempA==NULL){
        printf("Error");
        fclose(f);
        return;
    }
    for(int i=0;i<tempA->size;++i){
        fscanf(f,"%i",&tempA->elements[i]);
    }
    *array=tempA;
    fclose(f);
}

int maxx(IntArray *array) {
    int max = array->elements[0];
    for (int i = 0; i < array->size; i++)
        if (array->elements[i] > max)
            max = i;
    return max;


}

float atlag(IntArray *array){
    float d=0;
    for (int i = 0; i < array->size; ++i){
        d=d+array->elements[i];
    }
    d=d/array->size;
    return d;
}
void reverse (IntArray *array)
{

    for(int i=array->size-1; i>=0; --i)
    {
        printf("%i", array->elements[i]);
    }
}

int firstimpair(IntArray *array) {
    for (int i = 0; i < array->size; ++i) {
        if (array->elements[i] % 2 != 0) {
            return array->elements[i];
        }

    }
    return -1;
}
int minn(IntArray *array){
    int min=array ->elements[0];
    for(int i=1;i<array->size;++i)
    {
        if(array ->elements[i]<min)
            min=array ->elements[i];
    }
    return min;


}