#include <stdio.h> 
#include <stdlib.h>


node *addNode(node *newNode, int new_data){
	
	node *p = newNode;
	
	// e�er liste null ise
	
	if(newNode == NULL)
	{
		newNode = (node*)malloc(sizeof(node));
		newNode->next = NULL;
		
		newNode->std_number = new data;
		
		return newNode;
	}
	
	else if(newNode->std_number<new_data)
	{
		while(p->next!=NULL && p->next->std_number<new_data)
		{
			p=p->next;
		}
		
		node temp = (node*)malloc(sizeof(node));
		temp->next = NULL;
		p->next = temp;
		
		temp->std_number = new_data;
		
		return newNode;
	}
	// e�er liste bo� de�ilse ve eklenilecek d���m�n std_number'� daha b�y�kse sa�a ekle..
	
	
	
}

int main() {
	
	

	
	
	
	return 0;
}
