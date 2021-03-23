#include <stdio.h>
#include "functions.h"

int main() {

    QUEUE *myQueue = create(10);
    int op;
    /* printf("n=");
     scanf("%i", &n);*/

    do {
        printf("1. Elso elem bevitele \n 2. Elem kitorlese\n 3. Elso elem visszateritese\n 4.Kilepes: ");
        do {
            printf("\nOotions: ");
            scanf("%i", &op);
        } while (op < 0 || op > 5);
        int new;
        switch (op) {
            case 1:
                printf("Add meg az uj elemet: ");
                scanf("%i", &new);
                put(myQueue, new);
                break;
            case 2:
                printf("%i",get(myQueue));
                break;
            case 3:
                printf("%i",frontElement(myQueue));
        }

    } while (op != 4);


    return 0;
}
