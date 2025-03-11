#include <stdio.h>
#include <stdlib.h>

char *gunismi(char *gundizisi[], int uzunluk, int hangigun)
{
	if(hangigun>=1 && hangigun <8)
	{
		return gundizisi[hangigun -1];
	}
	
	else {
		return NULL;
	}
}

int main(int argc, char *argv[]) {
	
	int a;
	printf ("gun gir : ");
	scanf("%d", &a);
	
	char *gunler[7] = {"pazartesi", "sali", "carsamba", "persembe", "cuma", "cumartesi", "pazar"};
	
	char *p = gunismi(gunler, 7, a);
	
	
	if (p == NULL)
	{
		printf("NULL");
	}
	else
	{
	printf("Gun : %s", p);
	}
	
	return 0;
}
