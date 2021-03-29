//
// Created by Tibor on 2021. 03. 29..
//

#ifndef STACK_FUNCTIONS_H
#define STACK_FUNCTIONS_H
typedef struct {
    int maxsize;
    int p;
    int *items
} STACK;

STACK *create(int capacity);

int isEmpty(STACK *myStack);

int isFull(STACK *myStack);

void Push(STACK *myStack, int a);

int Pop(STACK *myStack);

int Top(STACK *myStack);

#endif //STACK_FUNCTIONS_H
