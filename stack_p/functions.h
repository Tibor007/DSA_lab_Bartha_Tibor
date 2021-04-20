//
// Created by Huni on 4/13/2021.
//

#ifndef STACK_FUNCTIONS_H
#define STACK_FUNCTIONS_H

typedef struct {
    int maxsize;
    int* elements;
    int top;
}Stack;

Stack* create(int maxsize);
int isempty(Stack* stack);
int isfull(Stack* stack);
int peek(Stack* stack);
int pop(Stack* stack);
int push(Stack* stack, int value);
void fillStack(Stack* stack);
void printStack(Stack* stack);

#endif //STACK_FUNCTIONS_H
