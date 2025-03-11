#include <stdio.h>
#include <stdlib.h>


int max(int *a,int uzunluk)
{
	int maks = a[0];
	int i;
	for(i = 1; i<uzunluk ; i++)
	{
		if(a[i]> maks)
		{
			maks =  a[i];
		}
	}

		return maks;
}
int main(int argc, char *argv[]) {
	
	
	int sayilar[5] = {3,4,342,100,1};
	
	int maks = max(sayilar, 5);
	
	printf(" En buyuk sayi = %d", maks);
	return 0;
}
