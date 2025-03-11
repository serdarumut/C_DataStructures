#include <stdio.h>
#include <stdlib.h>


struct Araba
{
	char marka[20];
	char model[20];
	int vitessay;
	float motor;
	int beygir;
	
}araba1 = {"ford" , "mustang" , 3 , 5.8 , 650 }, araba2;


int main()
{
	araba2 = araba1;
	printf("%s - %s - %d - %.1f - %d", araba2.marka, araba2.model, araba2.vitessay, araba2.motor, araba2.beygir);
	
	return 0;
}















/*

struct ogrenciler {
	
	char isim[15];
	char soyisim[15];
	int numara;
	int yas;
	
	

};


int main() {
	
	struct ogrenciler oznur  =  {"Oznur", "Pasahan","17" , "20"};
	
	printf("Isim : %s  Soyisim : %s  Numara : %d   Yas: %d", oznur.isim, oznur.soyisim, oznur.numara, oznur.yas);
	
	
	
	return 0;
}

*/






/*
struct personel
{
	char adi[20];
	char soyadi[12];
	int yasi;
	int maasi;
	char pozisyonu[20];
	
};



int main()
{
	
	struct personel kisi1 = {"Serdar Umut","TURAN", 21, 21500, "Muhendis"};
	
	printf("%s  -  %s  -  %d  -  %d  -  %s", kisi1.adi, kisi1.soyadi, kisi1.yasi, kisi1.maasi, kisi1.pozisyonu);
	
	return 0;
}


*/
