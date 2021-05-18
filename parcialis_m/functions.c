//
// Created by Tibor on 2021. 04. 20..
//

#include "functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

/* */
Node *create() {
    Node *newNode = (Node *) calloc(1, sizeof(Node));

    if (!newNode) {
        printf("Error while allocating newNode!");
        return NULL;
    }

    newNode->data = INT_MIN;
    newNode->next = NULL;

    return newNode;
}

/*Beszur a listaba egy elemet, amit szeretnek beletenni.
 * A fuggveny megkapja a legelso elemet a listanak,
 * az indexet es az erteket*/
void insert(Node **front, int data, int index) {
    Node *newNode = create();
    newNode->data = data;

    if (front == NULL || index == 0) {
        newNode->next = (struct Node *) *front;
        *front = newNode;
    } else {
        Node *p = *front;
        int i = 1;

        while (p->next != NULL && i < index) {
            p = (Node *) p->next;
            i++;
        }

        newNode->next = p->next;
        p->next = (struct Node *) newNode;
    }
}

/*A fuggveny megnezi hogy sikerulte megnyitni a filokat es megnezi hogy a szmjegyek parosak
 vagy paratlanoke es beleteszi a neki megfelelo fileba. A fuggveny megkapja a legelso elemet a listanak es a filok nevet*/
void print(Node *front, FILE *file_paros, FILE *file_paratlan) {
    if (!front || !file_paratlan || !file_paros) {
        return;
    }
    if ((front->data) % 2 == 0) {
        fprintf(file_paros, "%i ", front->data);

    } else {
        fprintf(file_paratlan, "%i ", front->data);
    }

    print((Node *) front->next, file_paros, file_paratlan);

}

/*A fuggveny megkapja a legelso elemet a listanak*/
void destroy(Node *front) {
    if (front->next)
        destroy((Node *) front->next);

    free(front);
    front = NULL;
}