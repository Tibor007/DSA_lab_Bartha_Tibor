//
//

#include "functions.h"
#include <stdlib.h>
#include <stdio.h>

Stack* create(int maxsize)
{
    Stack* stack = (Stack*)malloc(sizeof(Stack));

    if(!stack)
    {
        printf("Error!");
        return NULL;
    }

    stack->maxsize = maxsize;

    stack->elements = (int*)malloc(stack->maxsize * sizeof(int));

    stack->top = -1;

    return stack;
}

int isempty(Stack* stack) {

    if(stack->top == -1)
        return 1;
    else
        return 0;
}

int isfull(Stack* stack) {

    if(stack->top == stack->maxsize)
        return 1;
    else
        return 0;
}

int peek(Stack* stack) {
    return stack->elements[stack->top];
}

int pop(Stack* stack) {
    int data;

    if(!isempty(stack)) {
        data = stack->elements[stack->top];
        stack->top = stack->top - 1;
        return data;
    } else {
        printf("Could not retrieve data, Stack is empty.\n");
    }
}

int push(Stack* stack, int data) {

    if(!isfull(stack)) {
        stack->top = stack->top + 1;
        stack->elements[stack->top] = data;
    } else {
        printf("Could not insert data, Stack is full.\n");
    }
}

void fillStack(Stack* stack)
{
    for(int i = 0; i < 40; i++)
    {
        if(i % 2 == 0)
        {
            push(stack, i);
        }
    }
}

void printStack(Stack* stack)
{
    for(int i = 0; i < stack->maxsize; i++)
    {
        printf("%i\n", pop(stack));
    }


}