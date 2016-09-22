#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

struct node* push(struct node* top, int i)
{
   struct node *new_node;
   new_node = malloc(sizeof(struct node));
   if(new_node == NULL)
   {
	printf("malloc failed");
        return top;
   }
   
   new_node->value = i;
   new_node->next = top;
   return new_node;

}

struct node *make_empty(struct node *top)
{
   struct node *p;
   while(top != NULL){
      p = top;
      top = top->next;
      free(p);
   }
  return NULL;
}

struct node *pop(struct node *top, int *i)
{
   struct node *new_top;
   if(top != NULL)
   {
	*i = top->value;
	new_top = top->next;
	free(top);
        return new_top;
   }
	
   else{
	printf("stack is empty, can not pop.");
	return NULL;
   }
}

void print_stack(struct node *top)
{
   struct node *p;
   if(top != NULL){
      for(p = top; p !=NULL; p=p->next)
	printf("%d\n", p->value);
      printf("\n");
   }
   else
      printf("stack is empty\n");
}

struct node *roll(struct node *top)
{
	struct node *value = top; // sets new struct node to top
	
	value = value->next; // sets value to next one
	
	struct node *value_two = value->next; // new struct node to next value of first one
	
	value->next = value_two->next; // sets next value to the next value of second one
	value_two->next = top; // sets next value to the top to complete the roll

	return top;
}
