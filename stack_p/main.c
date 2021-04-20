#include <stdio.h>
#include "functions.h"

int main() {
    Stack* stack = create(20);
    fillStack(stack);
    printStack(stack);
    return 0;
}
