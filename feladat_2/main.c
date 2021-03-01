#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

int main() {
    int n;
    printf("Add meg a tomb hosszat, n= ");
    scanf("%i", &n);
    float *array = (float *) malloc(n * sizeof(float));
    for (int i = 0; i < n; ++i) {
        printf("Add meg a(z) %i-ik elemet:", i);
        scanf("%f", &array[i]);
    }
    printf("A szamok osszege: %f \n", sum(array, n));
    printf("A szamok szorzata: %f \n", product(array, n));
    printf("A szamok atlaga: %f \n", average(array, n));
    return 0;
}
