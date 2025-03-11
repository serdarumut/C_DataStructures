#include <stdio.h>
#include <stdlib.h>

int max(int a[], int uzunluk){
	int maks = a[0];
	int a;
	for(a = 1; a<uzunluk ; a++)
	{
		if(a[a]>maks)
		{
			maks = a[a];
		}
	}
	
}

int main(int argc, char *argv[]) {
	
	
	int sayilar[5] = {3,4,42,100,1};
	int maks = max(sayilar, 5);
	
	printf("Sayilar dizisinin maksimum degeri : %d", maks);
	
	return 0;
}
