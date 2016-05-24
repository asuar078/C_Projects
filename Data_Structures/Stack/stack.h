#ifndef STACK_H
#define STACK_H

#include <stdlib.h>
#define ERROR -9999

typedef struct node{
	StackData sdata;
	struct node *next;
} Node, *NodePtr;

typedef struct stackType{
	NodePtr top;
} StackType, *Stack;


Stack initStack(void){
	Stack sp = (Stack) malloc(sizeof(StackType));
	sp->top = NULL;
	return sp;
}


/**
* @brief check if stack is empty
*
* @param sp
*
* @return 1 if empty, else 0
*/
int empty(Stack sp){
	return (sp->top == NULL);
}

void push(Stack sp, StackData d){
	NodePtr np = (NodePtr) malloc(sizeof(Node));
	np->sdata = d;
	np->next = sp->top;
	sp->top = np;
}

StackData pop(Stack sp){
	/* if(empty(sp)) return ERROR; */
	StackData data = sp->top->sdata;
	NodePtr temp = sp->top;

	sp->top = sp->top->next;
	free(temp);
	
	return data;
}



#endif
