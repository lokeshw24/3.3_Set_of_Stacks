#include"stack.h"


int main(){
	Set_of_Stacks s;

	init( &s );
	push( &s , 10 );
	push( &s , 20 );
	push( &s , 30 );
	push( &s , 32 );
	push( &s , 33 );

	push( &s , 27 );
	push( &s , 19 );
	push( &s , 14 );
	push( &s , 49 );
	push( &s , 44 );
	push( &s , 8 );
	push( &s , 5 );
	push( &s , 2 );

	print( s );
	printf("Popped :%d \n", pop(&s,-1) );
	printf("Popped :%d \n", pop(&s,1) );
	printf("Popped :%d \n", pop(&s,1) );
	printf("Popped :%d \n", pop(&s,3) );
	printf("Popped :%d \n", pop(&s,2) );

	push( &s, 11 );
	print( s );


return 0;

}
