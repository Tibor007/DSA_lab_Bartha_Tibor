#include "Function.h"
#include <stdlib.h>
#include <stdio.h>

STACK * create(int capacity){
    STACK *myStack = (STACK*)malloc(sizeof (STACK));

    if (!myStack){
        printf("ERROR");
        return 0;
    }
    myStack->sp=1;
    myStack->elemek = (int*)malloc(myStack->meret*sizeof (int));

    if (!myStack->meret){
        printf("ERROR");
        return 0;
    }

    return myStack;
}

int isEmpty(STACK *myStack)
{
    return myStack->sp == -1;
}

int isFull(STACK *myStack)
{
    return myStack -> sp == myStack -> meret -1;
}

void Push(STACK *myStack, int a)
{
    myStack->sp+1;
    myStack->elemek[myStack->sp]=a;
}

int Pop(STACK *myStack)
{
    int a;
    a = myStack->elemek[myStack->sp];
    myStack->sp--;
    return a;
}

int Top(STACK *myStack)
{
    int a;
    a = myStack->elemek[myStack->sp];
    myStack->sp--;
    return a;
}