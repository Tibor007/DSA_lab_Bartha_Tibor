//
// Created by Tibor on 2021. 04. 20..
//

#include "functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

Stack *create(int capacity) {
    Stack *stack = (Stack *) malloc(sizeof(Stack));

    if (!stack) {
        printf("Error while allocating stack!");
        return NULL;
    }

    stack->maxSize = capacity;
    stack->sp = -1;
    stack->items = (int *) malloc(stack->maxSize * sizeof(int));

    if (!stack->items) {
        printf("Error while allocating stack items!");
        return NULL;
    }

    return stack;
}

int top(Stack *stack) {
    return stack->items[stack->sp];
}

int pop(Stack *stack) {
    int n = top(stack);
    stack->sp--;
    return n;
}

void insert(Stack *stack, char n) {
    stack->sp++;
    stack->items[stack->sp] = n;
}

void distroy(Stack *stack) {
    free(stack->items);
    free(stack);
}

void print(Stack *stack, FILE *file) {
    Stack *tmp = stack;
    int magan = 0;

    while (tmp) {
        if (strchr(stack->items, "aeiouAEIOU")) {
            fprintf(file, "%c", stack->items[i]);
        }
    }

}