//
// Created by Tibor on 2021. 04. 20..
//

#ifndef PARCIALIS_FUNCTIONS_H
#define PARCIALIS_FUNCTIONS_H

#include <stdio.h>

typedef struct {
    int data;
    struct Node *next;
} Node;

Node *create();

void insert(Node **front, int data, int index);

void print(Node *front, FILE* file_paros, FILE* file_paratlan);

void destroy(Node *front);


#endif //PARCIALIS_FUNCTIONS_H