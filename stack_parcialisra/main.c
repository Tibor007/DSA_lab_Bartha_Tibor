#include <stdio.h>
#include "functions.h"

int main() {
    STACK *myStack;
    myStack = create(20);

    int tmp = 0;

    for (int i = 20; i >= 1; --i) {
        if (!isFull(myStack))
        {
            Push(myStack,tmp);
            tmp += 2;

        } else{
            printf("Nincs hely");
        }
    }

    printf("%i", Top(myStack));

    return 0;
}
