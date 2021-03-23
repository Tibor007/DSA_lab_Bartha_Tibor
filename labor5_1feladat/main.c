#include <stdio.h>
#include "functions.h"

int main() {
    IntArray *a;
    readFromFile("be.txt", &a);
    printf("%d\n", maxx(a));
    printf("%f\n", atlag(a));
    reverse(a);
    printf("\n");
    printf("%d\n", minn(a));
    printf("%d\n", firstimpair(a));
    return 0;
}
