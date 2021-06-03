//
// Created by Tibor on 2021. 05. 29..
//

#ifndef GYAKORLAS_1_FUNCTION_H
#define GYAKORLAS_1_FUNCTION_H
typedef struct BinarySearchTree {
    int data;
    struct BinarySearchTree *left;
    struct BinarySearchTree *right;
} BinarySearchTree;

struct BinarySearchTree *create(int data);

void insert(struct BinarySearchTree **tree, int data);

void traverse(struct BinarySearchTree *tree);

void printcurrentlevels(struct BinarySearchTree *tree, int level);

int height(struct BinarySearchTree *tree);

#endif //GYAKORLAS_1_FUNCTION_H
