//
// Created by Tibor on 2021. 06. 03..
//

#ifndef MINTA_STACK_H
#define MINTA_STACK_H

#include <stdbool.h>

typedef struct Stack {
    int maxSize;
    int sp;

    char *data;
} Stack;

struct Stack *createStack(int capacity);

bool isEmpty(struct Stack *stack);

bool isFull(struct Stack *stack);

char top(struct Stack *stack);

void pop(struct Stack *stack);

void push(struct Stack *stack, char data);

void destroy(struct Stack *stack);

#endif //MINTA_STACK_H
