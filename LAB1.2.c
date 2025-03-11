#include <stdio.h>
#include <stdlib.h>

struct node{
	
	int data;
	struct node *next;
};

main(){
	
	struct node *head;
	head = (struct node *)malloc(sizeof(struct node));
	
	head -> data = 1;
	head -> next = NULL;
	
	head -> next = (struct node *)malloc(sizeof(struct node));
	
	head -> next -> data = 2;
	head -> next -> next = NULL;
	
	
	struct node *temp = (struct node*)malloc(sizeof(struct node));
	temp -> data = 3;
	temp -> next = head;
	head = temp;
	
	
	printf("%d   %d   %d", head->data, head->next->data, head->next->next->data);
}

