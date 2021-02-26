#include <stdio.h>
#include "functions.h"

int main() {
    int a,b,c;
    printf("Add meg a-t: ");
    scanf("%i", &a);
    printf("Add meg b-t: ");
    scanf("%i", &b);
    printf("Add meg c-t: ");
    scanf("%i", &c);

    printf("A harom szam kozul a legnagyobb: %i\n", legnagyobb_szam(a,b,c));
    printf("A harom szam kozul a legkisebb: %i", legkisebb_szam(a,b,c));

    return 0;
}
