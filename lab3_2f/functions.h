//
// Created by Tibor on 2021. 03. 09..
//

#ifndef LAB3_2F_FUNCTIONS_H
#define LAB3_2F_FUNCTIONS_H
typedef struct {
    int rows; // sorok száma
    int cols; // oszlopok száma
    int **data; //
} Matrix;

Matrix *createMatrix(int rows, int cols);

//tömb tartalmának beolvasása állományból
void readMatrix(const char *fileName, Matrix **array);


//tömb tartalmának kiiratása a képernyőre
void printMatrix(Matrix *array);

#endif //LAB3_2F_FUNCTIONS_H
