 #include <stdio.h>
#include <stdlib.h>



//    HEAD = BA�   TEMP = GEC�C�   NEXT = G�STER�C�   NODE = D�G�M


struct node
{
	int data;
	
	struct node * next;
};
struct node * head = NULL;//ba�taki d���m� tutacak
struct node * temp = NULL; // gecici bi d���m de olu�turup nulla atad�k.(Bunun �zerinde i�lem yapaca��m�z i�in ge�ici tan�mlad�k.


void sonaEkle(int sayi) // Metodumuzun bir parametresi var eklencek sayi
{

	struct node * eklenecek; // (Eklenecek d���m olu�turduk)yeni d���m olu�turduk node diyip d���me isim veriyoruz.
	eklenecek = (struct node *)malloc(sizeof(struct node));//d���me bellekte alan yer tan�mlad�k.
	eklenecek->data = sayi; // Du�umun i�ine veri giri�i de yapt�k.
	eklenecek-> next = NULL; // son g�stericinin de null oldu�unu da tan�mlad�k.(SONA ELEMAN EKLEYECEKSEK NULL DER�Z)
	
	
	// E�er yap�m�zda hi� d���m yoksa d���m� en ba�a ekleyece�iz
	// �ncelikle yap�m�zda hi� d���m var m� onu kontrol edelim.
	
	//Eklenecek d���m� nereye at�ca��m�zl if �artlar�yla buluyoruz.
	
	if(head==NULL) // E�er yap�da hic d���m yoksa en ba�a ata dedik(hic d���m yoksa if �al���yor)
	{
		head=eklenecek; // d���m� en ba�a ekledik.
	}
	else 				// en ba�taki d���m doluysa(elseye giriyor),son d���m� bulmal�y�z.
	{
		temp=head; 		// en ba�taki headi(ba� d���m�),ge�iciye ald�k
		
		while(temp->next!=NULL)		// null u bulmak i�in bi while d�ng�s� olu�turuyoruz. t�m d���mleri dola�s�n sonunda da null u bulsun
		{	
			temp=temp->next; //her bi d���m� geziyor.bir ad�m sonras�na ge�iyor.(ad�m ad�m ilerliyoruz.)
				
		}
		
		temp->next = eklenecek;//  yukarda olu�turdu�umuz eklencek d���m� tempin i�ine at�yoruz.
	
}
}
void yazdir()
{
	temp = head;
	while(temp->next != NULL)
	{
		printf("%d ",temp->data);
		temp=temp->next;
	}
			printf(" %d",temp->data); // NULL u buldu�unda en sonuncu veriyi yazm�yor onu burda yaz�yoruz d�ng�den ��kt����nda.

}


main(){
	int adet = 0;
	
	while(adet != 5){

	int sayi;
	printf("Bir sayi giriniz: ");
	scanf("%d", &sayi);
	sonaEkle(sayi);
	adet ++;
	}
	yazdir();
	
	
	return 0;
}





















/*
// HEAD = BAS   NODE = D�G�M   TEMP =  GEC�C�   NEXT = G�STER�C�


struct node {
	
	int data;
	struct node* next;
};

struct node * head = NULL;
struct node * temp = NULL;


void sonaekle(int sayi){
	
	struct node * eklenecek;
	eklenecek = (struct node*)malloc(sizeof(struct node));
	eklenecek -> data = sayi;
	eklenecek -> next = NULL;
	
	if(head == NULL){
		
		head = eklenecek;
	}
	else{
		temp = head;
		while( temp -> next != NULL){
			temp = temp -> next;
		}
		temp -> next =  eklenecek;
	}
}

void yazdir(){
	temp = head;
	while(temp -> next != NULL){
		printf("  %d  ", temp-> data);
		temp = temp->next;
	}
	
	printf("  %d  ", temp-> data);
}


int main() {
	int adet = 0;
	while (adet!=5){
		

	int sayi;
	printf("Bir sayi giriniz : ");
	scanf("%d", &sayi);
	sonaekle(sayi);
	adet++;
	}
	yazdir();
	
	return 0;
}

*/
