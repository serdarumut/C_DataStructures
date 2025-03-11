#include <stdio.h>
#include <stdlib.h>

struct n{
	int x;
	struct n *next;
};

typedef struct n node;


int main() {
		
	node * head;
	head = (node *)malloc(sizeof(node));
	head->x = 10;
	head->next = (node *)malloc(sizeof(node));
	head->next ->x=20;
	head->next ->next = (node *)malloc(sizeof(node));
	head->next->next-> x = 30;
	head->next->next->next = NULL;
	
	node *iter;
	iter = head;
	
	printf("%d", iter->x);
	iter = iter->next;
	printf("%d", iter->x);


	
	return 0;
}
