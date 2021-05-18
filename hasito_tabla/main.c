#include <stdio.h>
#include "function.h"

int main() {
    int m, n,k;
    printf("m = ");
    scanf("%i", &m);
    printf("n = ");
    scanf("%i", &n);
    int *hasTable = create(m);
    for(int i=0; i<n; i++){
        scanf("%i", &k);
        beszur(k,hasTable,m);
    }
    printf("A hasito tabla: ");
    for(int i=0; i<m; i++){
        printf("%i ", hasTable[i]);
    }
    int ker;
    printf("\nAdd meg a keresett elemt: ");
    scanf("%i", &ker);
    printf("\nKeressuk meg: %i-ik pozicion van a keresett elem!", keres(ker,hasTable,m));
    int tor;
    printf("\nAdd meg a torolni kivant elemt: ");
    scanf("%i", &tor);
    torol(tor,hasTable,m);
    printf("A hasito tabla: ");
    for(int i=0; i<m; i++){
        printf("%i ", hasTable[i]);
    }

    return 0;
}
