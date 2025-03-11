#include <stdio.h>
#include <stdlib.h>

char *dondur(char *p, int indeks)
{
	int uzunluk = strlen(p);
	
	if (indeks > uzunluk)
	{
		return NULL;
	}
	else
	{
		return p+indeks;	
	}
}


int main() {
	
	char dizi[] = "yazilim";

	char *p = dondur(dizi, 0);
	
	if(p == NULL)
	{
		printf("POINTER NULL");
	}

	else
	{
		printf("%s", p);	
	}	
	
	
	return 0;
}
