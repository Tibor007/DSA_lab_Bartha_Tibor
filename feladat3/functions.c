//
// Created by Tibor on 2021. 03. 01..
//

#include "functions.h"
int positive(int *array, int n){
    int db=0;
    for (int i = 0; i < n; ++i) {
        if(array[i]>=0){
            db++;
        }
    }
    return db;
}

int negative(int *array, int n){
    int db=0;
    for (int i = 0; i < n; ++i) {
        if(array[i]<0){
            db++;
        }
    }
    return db;
}

int even(int *array, int n){
    int db=0;
    for (int i = 0; i < n; ++i) {
        if(array[i]%2==0){
            db++;
        }
    }
    return db;
}

int odd(int *array, int n){
    int db=0;
    for (int i = 0; i < n; ++i) {
        if(array[i]%2 != 0){
            db++;
        }
    }
    return db;
}