#include <stdio.h>
#include "function.h"

int main() {
    BinarySearchTree *tree = tree = create(20);

    insert(&tree, 8);
    insert(&tree, 22);
    insert(&tree, 4);
    insert(&tree, 12);
    insert(&tree, 10);
    insert(&tree, 14);


    traverse(tree);
    printf("\n");
    int felso;
    int also;
    printf("Add meg a felso korlatot: ");
    scanf("%i", &felso);
    printf("Add meg a also korlatot: ");
    scanf("%i", &also);

    for (int i = 1; i <= height(tree); ++i) {
        printcurrentlevels(tree, i);
        printf("\n");
    }
    printf("--------------\n");
    for (int i=felso; i < also; i++) {
        printcurrentlevels(tree, i);
        printf("\n");

    }
    return 0;
}