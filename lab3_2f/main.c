#include <stdio.h>
#include "functions.h"

int main() {
    Matrix *array;
    readMatrix("be.txt", &array);
    printMatrix(array);
    return 0;
}
