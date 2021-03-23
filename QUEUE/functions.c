//
// Created by Tibor on 2021. 03. 23..
//

#include "functions.h"
#include <stdlib.h>
#include <stdio.h>

QUEUE *create(int capacity) {
    QUEUE *myQueue;
    myQueue = (QUEUE *) malloc(sizeof(QUEUE));
    if (!myQueue) {
        printf("Hiba");
        return NULL;
    }
    myQueue->front = -1;
    myQueue->rear = -1;
    myQueue->maxsize = capacity;
    myQueue->items = (int *) malloc(myQueue->maxsize * sizeof(int));
}

bool isEmpty(QUEUE *myQueue) {

    return (myQueue->rear == myQueue->front) && myQueue->front == -1;
}

bool isFull(QUEUE *myQueue) {
    return myQueue->maxsize - 1 == myQueue->rear;
}

void put(QUEUE *myQueue, int a) {
    if (!isFull(myQueue)) {
        if (!isEmpty(myQueue)){
            myQueue->rear++;
            myQueue->items[myQueue->rear] = a;
        }else
        {
            myQueue->rear++;
            myQueue->items[myQueue->rear] = a;
            myQueue->front++;
        }
    }
}

int get(QUEUE* myQueue){
    int tmp;

    if(!isEmpty(myQueue)){
        tmp = myQueue->items[myQueue->front];
        myQueue->front++;
    }else
    {
        printf("Nincs amit kitorulni!");
        return NULL;
    }
    return tmp;
}

int frontElement(QUEUE* myQueue){
    if (!isEmpty(myQueue)){
        return myQueue->items[myQueue->front];

    }
}
