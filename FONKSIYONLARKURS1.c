#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int asal_mi(int sayi)
{
	
	
		if(sayi<=0)
	{
		return 2;
	}	
	
	{
		int i;
		for(i=2; i<sayi;i++)
		{
			if(sayi%i==0)
			{
				return 0;
			}
		
		}
	return 1;
	}
}



int main(int argc, char *argv[]) {
	
	int gir;
	
	printf("Kontrol Etmek Istediginiz Sayiyi Giriniz: ");
	scanf("%d", &gir);
	
	
	
	if(asal_mi(gir) == 0)
	{
		printf("Girilen Sayi Asal Degildir!");
	}
	else if (asal_mi(gir) == 1)
	{
		printf("Girilen Sayi Asal Bir Sayidir!");
		
	}
	else
	{
		printf("0 ve 0'dan Kucuk Sayilarda Asallik Aranmaz.");

	}
	
	return 0;
}


























