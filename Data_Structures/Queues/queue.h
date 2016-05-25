#include <stdlib.h>

typedef struct node {
	QueueData data;
	struct node *next;
} Node, *NodePtr;

typedef struct queueType {
	NodePtr head, tail;
} QueueType, *Queue;

Queue initQueue(void){
	Queue qp = (Queue) malloc(sizeof(QueueType));
	qp->head = NULL;
	qp->tail = NULL;
	return qp;
}

int empty(Queue q){
	return (q->head == NULL);
}

void enqueue(Queue q, QueueData d){
	NodePtr np = (NodePtr) malloc(sizeof(Node));
	np->data =d;
	np->next =NULL;
	if(empty(q)){
		q->head = np;
		q->tail = np;
	}
	else{
		q->tail->next = np;
		q->tail = np;
	}
}

QueueData dequeue(Queue q){
	QueueData hold = q->head->data;
	NodePtr temp = q->head;
	q->head = q->head->next;
	if(q->head == NULL) q->tail = NULL;
	free(temp);
	return hold;
}

