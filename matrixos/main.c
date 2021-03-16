#include <stdio.h>
#include "functions.h"

int main() {
    Matrix* matrix;
    readMatrix("be.txt",&matrix);
    printMatrix(matrix);
    return 0;
}
