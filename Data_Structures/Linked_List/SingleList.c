#include "SingleList.c"



NodePtr makeNode(int n){

	NodePtr np = (NodePtr) malloc(sizeof(Node));
	np->num = n;
	np->next = NULL;
	return np;
}

NodePtr addToHead(NodePtr top, int n){

	Node np = makeNode(n);

	np->next = top;
	top = np;
}


void printList(NodePtr top){

	while(top !=NULL){
		printf("%d\n", top->num);
		top = top->next;
	}
}
