#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

int main() {
    int n;
    printf("Add meg a tomb hosszat: ");
    scanf("%i", &n);
    int *array = (int *) malloc(n * sizeof(int));
    for (int i = 0; i < n; ++i) {
        printf("Add meg a(z) %i-ik elemet:", i);
        scanf("%i", &array[i]);
    }
    printf("A pozitiv elemek szama: %i\n", positive(array, n));
    printf("A negativ elemek szama: %i\n", negative(array, n));
    printf("A paros elemek szama: %i\n", even(array, n));
    printf("A paratlan elemek szama: %i\n", odd(array, n));
    return 0;
}
