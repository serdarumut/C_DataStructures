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
	
	
	struct node *temp1 = (struct node*)malloc(sizeof(struct node));
	
	temp1->data = 4;
	temp1->next = NULL;
	
	
	struct node *temp2 = head;
	
	while(temp2 -> next != NULL)
		temp2 = temp2->next;
		
	temp2->next = temp1;	
	
	int sayac = 0;
	
	struct node *temp3 = head;
	while(temp3 != NULL){
		printf("%d \n", temp3 -> data);
		temp3 = temp3 -> next;
		sayac++;
	}
	
	printf("%d", sayac);
	
	
}
