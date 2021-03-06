#include <stdio.h>
#include "functions.h"

int main() {
    unsigned int seconds;

    printf("Add meg a masodperceket: ");
    scanf("%u", &seconds);

    printInHour(seconds);

    return 0;
}
