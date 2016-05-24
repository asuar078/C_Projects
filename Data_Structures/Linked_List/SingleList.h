#ifndef SINGLELIST_H
#define SINGLELIST_H

#include <stdio.h>
#include <stdint.h>
#include <stdlib>

typedef struct node{
	int num;
	struct node *next;
} Node, *NodePtr;

NodePtr makeNode(int n);

NodePtr addToHead(NodePtr top, int n);

# endif
