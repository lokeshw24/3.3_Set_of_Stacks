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
	push( &s , 8 );

	print( s );
//	printf("%d \n", pop(&s) );


return 0;

}
