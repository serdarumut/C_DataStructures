#include <stdio.h>
#include <stdlib.h>


struct rec{
	int ID;
	char name[20];
};


int main() {
	
	
	struct rec *group;
	
	group = (struct rec*)malloc(sizeof(struct rec) *2); 

	group[0].ID = 00001;
	
	strcpy(group[0].name, "Serdar");
	
	printf(" ID: %d, Isim: %s \n", group[0].ID, group[0].name);
	
	
	group[1].ID = 00002;
	
	strcpy(group[1].name, "Oznur");
	
	printf("ID: %d, Isim : %s \n", group[1].ID, group[1].name);
	
	group[2].ID = 00003;
	
	strcpy(group[2].name, "beli");
	
	printf("ID: %d, Isim : %s \n", group[2].ID, group[2].name);
	
	
	return 0;
}
