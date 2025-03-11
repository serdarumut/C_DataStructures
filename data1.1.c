#include <stdio.h>
#include <stdlib.h>

struct node {           //         TEK YÖNLÜ DOÐRUSAL VERÝ GÝRÝÞÝ         YAPI OLUÞTURMA - DÜÐÜM OLUÞTURMA - DÜGÜME VERÝ GÝRÝÞÝ YAPMA - EKRANA YAZDIRMA
    int data;
    struct node *next;
};

int main() {
    struct node * first;   // DÜGÜM OLUSTURMA
    first = (struct node *) malloc (sizeof( struct node)); // BELLEKTE YER AYIRMA
    
    struct node * second;
    second = (struct node *) malloc (sizeof( struct node));

	struct node * third;
    third = (struct node *) malloc (sizeof( struct node));
    
    struct node * fourth;
    fourth = (struct node *) malloc (sizeof( struct node));
    
    first -> data = 1;        // VERÝ GÝRÝÞÝ
    first -> next = second;   // BÝR SONRAKÝ DÜÐÜMÜ GÖSTERDÝK
    
    second -> data = 2;      
    second -> next = third;
	
	third -> data = 3;
    third -> next = fourth;
	
	fourth -> data= 4;
   	fourth -> next = NULL;   
   	
   	
   	printf(" %d   -   %d   -   %d   -   %d ", first -> data, second -> data, third -> data, fourth -> data);     // DATALARI YAZDIRMACA
    
    
    
    return 0;
}
