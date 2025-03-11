#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Address{
	char mahalle[15];
	char cadde[20];
	char numarali[15];
	
};


struct ogrenci{
	
	char isim[20];
	char soyisim[20];
	int numara;
	int yas;
	
	struct Address adresi;
};


int main() {
	
	struct ogrenci ogrenci1;
	
	strcpy(ogrenci1.isim,"Serdar");
	strcpy(ogrenci1.soyisim, "TURAN");
	ogrenci1.numara = 471;
	ogrenci1.yas = 21;
	
	strcpy(ogrenci1.adresi.mahalle, "Hamdibey");
	strcpy(ogrenci1.adresi.cadde, "Huseyin Onan");
	strcpy(ogrenci1.adresi.numarali, "72. Numarali"); 
	
	printf("%s %s %d %d %s %s %s", ogrenci1.isim, ogrenci1.soyisim, ogrenci1.numara, ogrenci1.yas, ogrenci1.adresi.mahalle, ogrenci1.adresi.cadde, ogrenci1.adresi.numarali);
	
	
	
	
	return 0;
}
