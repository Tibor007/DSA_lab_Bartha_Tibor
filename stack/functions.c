//
// Created by Tibor on 2021. 03. 29..
//

#include <stdlib.h>
#include <stdio.h>
#include "functions.h"

STACK * create(int capacity){
    STACK *myStack = (STACK*)malloc(sizeof (STACK));

    if (!myStack){
        printf("Hiba!");
        return 0;
    }
    myStack->p=1;
    myStack->items = (int*)malloc(myStack->maxsize*sizeof (int));

    if (!myStack->maxsize){
        printf("Hiba!");
        return 0;
    }

    return myStack;
}

int isEmpty(STACK *myStack)
{
    return myStack->p == -1;
}

int isFull(STACK *myStack)
{
    return myStack -> p == myStack -> maxsize -1;
}

void Push(STACK *myStack, int a)
{
    myStack->p+1;
    myStack->items[myStack->p]=a;
}

int Pop(STACK *myStack)
{
    int a;
    a = myStack->items[myStack->p];
    myStack->p--;
    return a;
}

int Top(STACK *myStack)
{
    int a;
    a = myStack->items[myStack->p];
    myStack->p--;
    return a;
}