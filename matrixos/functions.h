//
// Created by Tibor on 2021. 03. 16..
//

#ifndef MATRIXOS_FUNCTIONS_H
#define MATRIXOS_FUNCTIONS_H
typedef struct {
    int rows; // sorok száma
    int cols; // oszlopok száma
    int **data; //
} Matrix;

Matrix *createMatrix(int rows, int cols);

void readMatrix(const char *fileName, Matrix **array);

void printMatrix(Matrix *array);

#endif //MATRIXOS_FUNCTIONS_H
