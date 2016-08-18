#ifndef BINARYTREE_H
#define BINARYTREE_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct tree_el {
   int val;
   struct tree_el * right, * left;
};

typedef struct tree_el node;

void insert(node ** tree, node * item);

void printout(node * tree) ;

#endif
