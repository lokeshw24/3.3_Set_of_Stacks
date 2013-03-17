#include<stdio.h>
#include<stdlib.h>

#define STACK_LIMIT 5

typedef struct abc{
	int data;
	struct abc *next;
}node;


typedef struct pqr {
	node *stack_ptr;
	struct pqr *base_node_next;
}base_node;



typedef base_node *Set_of_Stacks;

