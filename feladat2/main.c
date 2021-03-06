#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "functions.h"

const int N = 10000000;

int main() {

    srand(time(NULL));

    int *array = (int *) malloc(N * sizeof(int));
    int number = N-1;

    printf("%i\n", N);

    fillArray(array, N, N);

    clock_t start = clock();
    int result = linearSearch(array, N, number);
    clock_t stop = clock();

    double diff = (double) (stop - start) / CLOCKS_PER_SEC;

    printf("A keresett elem: %i\n", number);
    printf("A keresett elem indexe: %i\n", result);
    printf("Lefutasi ido: %f\n", diff);

    free(array);

    return 0;
}