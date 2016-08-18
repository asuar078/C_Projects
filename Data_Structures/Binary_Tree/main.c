#include <stdio.h>
#include "BinaryTree.h"

int main(void){

	printf("----- Binary Tree -----\n");
	node *curr, *Root = NULL;

	for(int i=1;i<=10;i++) {
      curr = (node *)malloc(sizeof(node));
      curr->left = curr->right = NULL;
      curr->val = rand();
      insert(&Root, curr);
   }

   printout(Root);	

 	return 0;
}
