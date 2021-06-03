//
// Created by Tibor on 2021. 06. 03..
//

#include "BinarySearchTree.h"
#include <stdio.h>
#include <stdlib.h>

root *create(char adat) {

    root *ag = (root *) (malloc(sizeof(root)));

    if (!ag) {
        printf("Sikertelen lefoglalas");
        return 0;
    }

    ag->adat = adat;
    ag->jobb = NULL;
    ag->bal = NULL;

    return ag;
}

void insert(root **fa, char adat) {
    if ((*fa) == NULL) {
        (*fa) = create(adat);
        return;
    }
    if ((*fa)->adat > adat)
        insert(&((*fa)->bal), adat);
    else if ((*fa)->adat < adat)
        insert(&((*fa)->jobb), adat);
}


void inorder(root *fa) {
    if (fa->bal)
        inorder(fa->bal);

    printf("%3c ", fa->adat);

    if (fa->jobb)
        inorder(fa->jobb);
}

void preorder(root *fa) {
    printf("%3d ", fa->adat);
    if (fa->bal)
        preorder(fa->bal);
    if (fa->jobb)
        preorder(fa->jobb);
}

void postorder(root *fa) {
    if (fa->bal)
        postorder(fa->bal);
    if (fa->jobb)
        postorder(fa->jobb);
    printf("%3d ", fa->adat);
}

int height(struct root *fa) {
    if (fa == NULL)
        return 0;
    int lDepth = height(fa->bal);
    int rDepth = height(fa->jobb);

    if (lDepth > rDepth)
        return lDepth + 1;
    else
        return rDepth + 1;
}

void destroyb(struct root *fa) {
    if (!fa)
        return;
    destroyb(fa->bal);
    free(fa);
    destroyb(fa->jobb);
}
struct root *minValueNode(struct root *fa){
    struct root* current = fa;
    while (current && current->jobb != NULL)
        current = current->jobb;
    return current;
}
struct root *deleteFromRoot(struct root* fa, char data){
    if(fa == NULL)
        return fa;

    if(data < fa->adat)
        fa->bal = deleteFromRoot(fa->bal, data);

    else if(data > fa->adat)
        fa->jobb = deleteFromRoot(fa->jobb, data);

    else {

        if(fa->bal == NULL) {
            struct BST* tmp = fa->jobb;
            free(fa);
            return tmp;
        } else if(fa->jobb == NULL) {
            struct BST* tmp = fa->bal;
            free(fa);
            return tmp;
        }

        struct root * tmp = minValueNode(fa);

        fa->adat = tmp->adat;

        fa->jobb = deleteFromRoot(fa->jobb, data);
    }

    return fa;
}
