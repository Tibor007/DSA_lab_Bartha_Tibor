//
// Created by Tibor on 2021. 04. 13..
//

#ifndef STACK_PARCIALISRA_FUNCTIONS_H
#define STACK_PARCIALISRA_FUNCTIONS_H
typedef struct {
    int meret;
    int sp;
    int *elemek;
} STACK;

STACK *create(int capacity);

int isEmpty(STACK *myStack);

int isFull(STACK *myStack);

void Push(STACK *myStack, int a);

int Pop(STACK *myStack);

int Top(STACK *myStack);

#endif //STACK_PARCIALISRA_FUNCTIONS_H
