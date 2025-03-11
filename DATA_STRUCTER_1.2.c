#include <stdio.h>
#include <stdlib.h>

struct hasta{
	int data;
	struct hasta  *next;
};


int main() {
	
	// LISTE OLUSTURMA
	
	struct hasta  *head;
	
	head = (struct hasta*) malloc(sizeof(struct hasta));
	head->data = 10;
	head->	next = NULL;
	
	
	// LISTEYE ELEMAN EKLEME ...  Listenin Sonuna Ekleme
	
	head->next = (struct hasta*)malloc(sizeof(struct hasta));
	head->next->data = 11;
	head->next->next = NULL;
	
	
	printf(" Dugum : %d", head->next->data);
	
	
	
	// LISTENIN BASINA DUGUM EKLEME
	
	
	
	struct hasta *temp = (struct hasta*)malloc(sizeof(struct hasta));
	
	temp->data = 9;
	temp->next=head;
	head = temp;
	
	printf(" Bastaki dugum :  %d", temp->data);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
	
}
