#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

int main() {
    int n;
    printf("Add meg a tomb hosszat: ");
    scanf("%i", &n);
    float *array = (float *) malloc(n * sizeof(float));
    for (int i = 0; i < n; ++i) {
        printf("Add meg a(z) %i-dik elemet: ");
        scanf("%f", &array[i]);
    }
    printf("A tomb elemei forditott sorrendben: ");
     inverse(array,n);
    return 0;
}
