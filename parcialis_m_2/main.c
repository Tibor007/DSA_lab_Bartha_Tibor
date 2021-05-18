#include <stdio.h>
#include "functions.h"

int main() {
    char x[11];
    printf("Add meg a szavat: ");
    scanf("%s", x);
    Stack *stack = create(10);

    FILE *file = fopen("kimenet_maganhangzo.txt", "w");

    if (!file) {
        printf("Hiba");
        return -1;

    }
    int i = 0;
    while (x[i] != '\0') {

        insert(stack, x[i]);
        i++;
    }
    //print(stack,file);
    fclose(file);
    distroy(stack);
    return 0;
}