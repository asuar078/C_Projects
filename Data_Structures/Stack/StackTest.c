#include <stdio.h>

typedef struct {
	int num;
} StackData;

#include "stack.h"


int main(void){

	Stack sp = initStack();

	printf("Enter values\n");
	/* printf("isEmpty: %d\n", empty(sp)); */
	StackData val;
	int n = 0;
	

	scanf("%d", &n);
	while(n != 0){
		val.num = n;	
		push(sp, val);
		scanf("%d", &n);
	}	

	printf("values in reverse order:\n");
	while(!empty(sp)){
		printf("%d ", pop(sp).num);
	}
	printf("\n");

	return 0;


}
