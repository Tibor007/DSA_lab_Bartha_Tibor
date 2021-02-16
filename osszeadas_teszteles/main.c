#include <stdio.h>

int osszeadas(int a, int b)
{

    return a+b;
}

int main() {
    int a,b;
    printf("Add meg a: ");
    scanf("%i", &a);
    printf("Add meg b: ");
    scanf("%i", &b);
   printf("%i", osszeadas(a,b));
    return 0;
}
