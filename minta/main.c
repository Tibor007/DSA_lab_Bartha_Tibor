#include <stdio.h>
#include "1es_feladat/Stack.h"
#include "2_feladat/BinarySearchTree.h"
#include <string.h>

int main() {
    printf("\n 1.FELADAT\n");
    char word[101];

    printf("\nSzo: ");
    scanf("%s", word);

    Stack *stack = createStack(strlen(word));
    printf("\nA verem %s.", (isEmpty(stack) ? "ures" : "nem ures"));

    for (int i = 0; i < strlen(word); i++) {
        push(stack, word[i]);
    }

    printf("\nA vererm: ");
    for (int i = stack->sp; i >= 0; i--) {
        printf("%c, ", stack->data[i]);
    }
    printf("\b\b");
    printf("\nA verem %s.", (isEmpty(stack) ? "ures" : "nem ures"));
    printf("\nA verem legfelso eleme %c", top(stack));
    int x;
    printf("\nX = ");
    scanf("%i", &x);
    for (int i = 0; i < x; ++i) {
        pop(stack);
    }
    printf("\nA vererm: ");
    for (int i = stack->sp; i >= 0; i--) {
        printf("%c, ", stack->data[i]);
    }
    destroy(stack);


    ///2.FELADAT
    printf("\n 2.FELADAT\n");

    printf("\nSzo: ");
    scanf("%s", word);
    root *fa = NULL;
    for (int i = 0; i < strlen(word); ++i) {
        insert(&fa, word[i]);
    }
    printf("\n A binaris fa: ");
    inorder(fa);
    printf("\nA fa melysege: %i", height(fa));
    char c;
    printf("\nC: ");
    scanf("%c", &c);
    deleteFromRoot(fa, c);
    printf("\nA binaris fa: ");
    inorder(fa);

    return 0;
}
