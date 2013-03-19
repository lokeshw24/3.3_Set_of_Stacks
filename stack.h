#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

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

/***************************************************/
void init( Set_of_Stacks *s );

void push( Set_of_Stacks *s , int val );

void print( Set_of_Stacks s ) ;

int pop( Set_of_Stacks *s , int index ) ;
/* if index=-1, then do normal pop.
 * else
 * if index=0, then pop from stack-0,
 * if index=1, then pop from stack-1,
 * so on.
 */


