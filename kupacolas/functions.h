//
// Created by Tibor on 2021. 05. 11..
//

#ifndef KUPACOLAS_FUNCTIONS_H
#define KUPACOLAS_FUNCTIONS_H
typedef struct euro {
    int year;
    int month;
    int price;
} euro;
typedef struct heap {
    int *data;
    int size;
    int maxSize;
    euro *euro1;
} heap;
heap *createHeap(int max);

void insert(heap *h, int year, int month, int price);

void up(heap *h, int i);

void down(heap *h, int i);

void kupacrendez(heap *h, int N);

int torolmax(heap *h);


#endif //KUPACOLAS_FUNCTIONS_H
