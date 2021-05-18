#include <stdio.h>
#include "functions.h"

int main() {
    int x;
    printf("Add meg a szamot: ");
    scanf("%i", &x);
    Node *front = NULL;

    FILE *file_paros = fopen("kimenet_paros.txt", "w");
    FILE *file_paratlan = fopen("kimenet_paratlan.txt", "w");

    if (!file_paratlan) {
        printf("Hiba");
        return -1;

    }

    if (!file_paros) {
        printf("Hiba!");
        return -1;
    }


    while (x > 0) {

        insert(&front, x % 10, 0);
        x = x / 10;

    }
    print(front, file_paros, file_paratlan);

    fclose(file_paros);
    fclose(file_paratlan);

    return 0;
}