#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	return 0;
}




                                                    //    ÇÝFT BAÐLI LÝSTELER      //

//BAÞA ELEMAN EKLEME

void addhead (int key);

	if(head == null){
		head = (head node*)malloc(sizeof(head node));
		head -> data = key;
		head -> next = NULL;
		head -> prev = NULL;
	}
	else{
		struct node *temp = (temp node*)malloc(sizeof(temp node));
		temp -> data = key;
		temp -> next = NULL;
		temp -> prev = HEAD;
		head = temp;
	}
}



// SONA ELEMAN EKLEME

void addlast (int key){
	if(head == NULL){
		head = (struct node *) malloc (sizeof(struct node))
		head -> data = key;
		head -> prev = NULL;
		head -> next = NULL;
	}
	
	else{
		struct node *temp = head;
		struct node *temp2 = (struct node *) malloc (sizeof(struct node));
		
		while(temp-> next != NULL){
			temp = temp-> next;
		}
		temp2 -> data = key;
		temp2 -> prev = temp;
		temp2 -> next = NULL;
		temp -> next = temp2;
		
	}
}



// ARAYA ELEMAN EKLEME

void addthen(node* other_node, node*& list, int n ){
	node *temp = head;
	int i = 1;
	while(i<n){
		head= head->next;
		i++;
	}
	
	other_node -> prev = head;
	other_node -> next = head->next;
	head-> next = ohter_node;
	head = temp
}


// Düðüm Silme

void node_delete(int key){
	struct node * temp = head;
	
	if(head-> data == key){
		head = head -> next;
		head -> prev = NULL;
		free(temp);
	}
	else
	 	while(temp -> data != key){
			temp = temp-> next;
	    }
		
		temp -> prev -> next = temp -> next
		
		if(temp-> next != NULL){
			temp -> next -> prev = temp -> prev;
		}
		
		free(temp);

}


	
























