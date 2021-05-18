//
// Created by Tibor on 2021. 04. 20..
//

#ifndef PARCIALIS_2_FUNCTIONS_H
#define PARCIALIS_2_FUNCTIONS_H

#include <stdbool.h>
#include <stdio.h>

typedef struct {
    int maxSize;
    int sp;
    char *items;
} Stack;

Stack *create(int capacity);

int pop(Stack *stack);

int top(Stack *stack);

void insert(Stack *stack, char n);

void distroy(Stack *stack);

void print(Stack *stack, FILE *file);

#endif //PARCIALIS_2_FUNCTIONS_H