//
// Created by Tibor on 2021. 06. 03..
//

#ifndef MINTA_BINARYSEARCHTREE_H
#define MINTA_BINARYSEARCHTREE_H
typedef struct root {
    char adat;
    struct root *bal;
    struct root *jobb;
} root;

root *createBST(char adat);

void insert(root **fa, char adat);

void inorder(root *fa);

int height(struct root *fa);

void preorder(root *fa);

void postorder(root *fa);

void destroyb(struct root *fa);

struct root *minValueNode(struct root *fa);

struct root *deleteFromRoot(struct root* fa, char data);

#endif //MINTA_BINARYSEARCHTREE_H
