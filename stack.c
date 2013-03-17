#include"stack.h"

int stack_index=0;

void init( Set_of_Stacks *s ){
	*s=NULL;

}

/*************************************************************/
node *create_node( int val ){
	node *temp=(node *)malloc(sizeof(node) );
	temp->data=val;
	temp->next=NULL;

return temp;

}

/*************************************************************/
int append_to_stack( node **s , int val ){

	if( *s==NULL ){
		*s=create_node(val);
		printf(" $%d ", val );
	}
	else{
		node *temp=*s;
		int count=1;

		while(temp->next){
			temp=temp->next;
			count++;
		}
		if( count == STACK_LIMIT ){
			printf("New stack needed$$ \n");
			return -1 ;

		}
		temp->next=create_node(val);
	}

return 0;

}

/*************************************************************/
base_node *create_base_node(){
	base_node *temp=(base_node*)malloc( sizeof(base_node));
	temp->stack_ptr=NULL;
	temp->base_node_next=NULL;

return temp;
}

/*************************************************************/
void push( Set_of_Stacks *s , int val ){
	if( *s==NULL ){
		*s= create_base_node();
		append_to_stack( &((*s)->stack_ptr) , val );
		//(*s)->stack_ptr=create_node(val);

	}
	else{
		base_node *temp=*s;
		while( temp->base_node_next ){
			temp=temp->base_node_next;
			printf("1st stack val : %d \n" , temp->stack_ptr->data) ;
		}

		if( append_to_stack( &(temp->stack_ptr), val ) == -1 ){

			temp->base_node_next=create_base_node();
			append_to_stack( &(temp->base_node_next->stack_ptr) , val );
			printf("&& \n");
		}
	}


}

/*************************************************************/
void print_stack( node *stack_ptr ){
	while( stack_ptr ){
		printf("%d ", stack_ptr->data );
		stack_ptr=stack_ptr->next ;
	}

	printf("\n");

}
/*************************************************************/
void print( Set_of_Stacks s ){
	if( s==NULL ) return ;

	base_node *temp=s ;
	while(temp){
		printf("##\n");
		print_stack( temp->stack_ptr );
		temp=temp->base_node_next;
	}

}
	




