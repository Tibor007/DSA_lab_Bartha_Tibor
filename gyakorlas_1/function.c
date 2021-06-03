//
// Created by Tibor on 2021. 05. 29..
//

#include "function.h"
#include <stdio.h>
#include <stdlib.h>

struct BinarySearchTree *create(int data) {
    struct BinarySearchTree *branch = (struct BinarySearchTree *) malloc(sizeof(struct BinarySearchTree));

    if (!branch) {
        printf("Error while allocating memory for BST!");
        return NULL;
    }

    branch->data = data;
    branch->left = NULL;
    branch->right = NULL;

    return branch;
}

void insert(struct BinarySearchTree **tree, int data) {
    if ((*tree) == NULL) {
        (*tree) = create(data);
    } else {
        if ((*tree)->data > data)
            insert(&((*tree)->left), data);
        else
            insert(&((*tree)->right), data);
    }
}


void traverse(struct BinarySearchTree *tree) {
    if (tree->left)
        traverse(tree->left);

    printf("%i ", tree->data);

    if (tree->right)
        traverse(tree->right);
}

void printcurrentlevels(struct BinarySearchTree *tree, int level) {
    if (tree == NULL)
        return;
    if (level == 1)
        printf("%i ", tree->data);
    else if (level > 1) {
        printcurrentlevels(tree->left, level - 1);
        printcurrentlevels(tree->right, level - 1);
    }
}

int height(struct BinarySearchTree *tree) {
    if (tree == NULL)
        return 0;
    else {
        int lheight = height(tree->left);
        int rheight = height(tree->right);

        if (lheight > rheight)
            return (lheight + 1);
        else return (rheight + 1);
    }
}