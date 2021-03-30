//
// Created by Tibor on 2021. 03. 30..
//
#ifndef LINKED_LIST_FUNCTIONS_H
#define LINKED_LIST_FUNCTIONS_H

#include <stdbool.h>

typedef struct Dig {
    int vdig; // maga a szamjegy
    int cdig; // a szamjegy elofordulasanak a szama
}Dig;

typedef struct Digit {
    int nrdigit;
    Dig* digits;
}Digit;

//Digit típus létrehozása
Digit* Create(int capacity);
//Digit típus felszabadítása
void Destroy(Digit* array);
//Tömb feltöltése
void Input(Digit** array, int number);
//k. számjegy lekérdezése
int Digit_k(Digit* array, int k);
//számjegyek számának lekérdezése
int SizeDigit(Digit* array);
//IntArray típus kiiratása
void Print(Digit* array);
int init(Digit* array, int digit);
bool asc(Digit* array);

#endif //LINKED_LIST_FUNCTIONS_H
