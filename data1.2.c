 #include <stdio.h>
#include <stdlib.h>



//    HEAD = BAÞ   TEMP = GECÝCÝ   NEXT = GÖSTERÝCÝ   NODE = DÜGÜM


struct node
{
	int data;
	
	struct node * next;
};
struct node * head = NULL;//baþtaki düðümü tutacak
struct node * temp = NULL; // gecici bi düðüm de oluþturup nulla atadýk.(Bunun üzerinde iþlem yapacaðýmýz için geçici tanýmladýk.


void sonaEkle(int sayi) // Metodumuzun bir parametresi var eklencek sayi
{

	struct node * eklenecek; // (Eklenecek düðüm oluþturduk)yeni düðüm oluþturduk node diyip düðüme isim veriyoruz.
	eklenecek = (struct node *)malloc(sizeof(struct node));//düðüme bellekte alan yer tanýmladýk.
	eklenecek->data = sayi; // Duðumun içine veri giriþi de yaptýk.
	eklenecek-> next = NULL; // son göstericinin de null olduðunu da tanýmladýk.(SONA ELEMAN EKLEYECEKSEK NULL DERÝZ)
	
	
	// Eðer yapýmýzda hiç düðüm yoksa düðümü en baþa ekleyeceðiz
	// Öncelikle yapýmýzda hiç düðüm var mý onu kontrol edelim.
	
	//Eklenecek düðümü nereye atýcaðýmýzl if þartlarýyla buluyoruz.
	
	if(head==NULL) // Eðer yapýda hic düðüm yoksa en baþa ata dedik(hic düðüm yoksa if çalýþýyor)
	{
		head=eklenecek; // düðümü en baþa ekledik.
	}
	else 				// en baþtaki düðüm doluysa(elseye giriyor),son düðümü bulmalýyýz.
	{
		temp=head; 		// en baþtaki headi(baþ düðümü),geçiciye aldýk
		
		while(temp->next!=NULL)		// null u bulmak için bi while döngüsü oluþturuyoruz. tüm düðümleri dolaþsýn sonunda da null u bulsun
		{	
			temp=temp->next; //her bi düðümü geziyor.bir adým sonrasýna geçiyor.(adým adým ilerliyoruz.)
				
		}
		
		temp->next = eklenecek;//  yukarda oluþturduðumuz eklencek düðümü tempin içine atýyoruz.
	
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
			printf(" %d",temp->data); // NULL u bulduðunda en sonuncu veriyi yazmýyor onu burda yazýyoruz döngüden çýktýðýýnda.

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
// HEAD = BAS   NODE = DÜGÜM   TEMP =  GECÝCÝ   NEXT = GÖSTERÝCÝ


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
