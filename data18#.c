#include <stdio.h>
#include <stdlib.h>
//BAÞA, ARAYA, SONA EKLEME ;SONDAN, BAÞTAN, ARADAN ELEMAN SÝLME//
struct node{
	int data;
	struct node *next;
};

struct node* start = NULL;
struct node* temp = NULL;
struct node* q = NULL;

void sonaEkle(int veri){
	struct node* eklenecek =(struct node*)malloc(sizeof(struct node));
	eklenecek->data =veri;
	eklenecek->next=NULL;
	
	if(start == NULL)
	{
		start = eklenecek;
	}else{
		q = start;
		while(q->next != NULL)
		{
			q=q->next;
		}
		q->next = eklenecek;
	}
}
void yazdir()
{
	q = start;
	while(q->next!=NULL)
	{
		printf("%d->", q->data);
		q = q->next;
	}
	printf("%d", q->data);
}
void basaEkle(int basa)
{
	struct node *basaGelecek = (struct node*)malloc(sizeof(struct node));
	basaGelecek->data = basa;
	basaGelecek->next = start;
	start = basaGelecek;
}
void arayaEkle(int x,int y)
{	
	struct node* arayaEklenecek = (struct node*)malloc(sizeof(struct node));
	arayaEklenecek->data = y;
	q = start;
	while(q->next->data!=x)
	{
		q = q->next;
	}
	struct node* onune = (struct node*)malloc(sizeof(struct node));
    onune = q->next;
    q->next = arayaEklenecek;
    arayaEklenecek->next = onune;
}   
void sondanSil()
{
	if(start!=NULL)
	{
		q = start;
	while (q->next->next != NULL)
	{
		q = q->next;
	}
	free(q -> next);
	q -> next = NULL;
	}
	
}
void bastanSil()
{
	struct node* ikinci = NULL;
	ikinci = start->next;
	free(start);
	start = ikinci;
}
void aradanSil(int x)
{
	if(start->data == x)
	{
		bastanSil();
	}
	
	struct node *onceki = NULL;
	struct node *sonraki = NULL;
	
	q=start;
	while(q -> next -> data != x)
	{
		q=q->next;
	}
	if(q -> next == NULL)
	{
		sondanSil;
	}
	onceki = q;
	sonraki = q -> next -> next;
	free(q -> next);
	onceki->next = sonraki;
	
}

int main()
{
	int secim, sona, basa, x,y;
	while(1==1)
	{
		printf("\n1- Sona Eleman Ekle");
		printf("\n2- Basa Eleman Ekle");
		printf("\n3- Araya Eleman Ekle");
		printf("\n4- Sondan Eleman Sil");
		printf("\n5- Bastan Eleman Sil");
		printf("\n6- Aradan Eleman Sil");
		printf("\n Yapmak istediginiz islemi secin\n ");
		scanf("%d",&secim);
		
		switch(secim)
		{
			case 1:
				printf("\n Sona eklemek istediginiz elemaný girin...");
				scanf("%d", &sona);
				sonaEkle(sona);
				yazdir();
				break;
			case 2:
				printf("\n Basa eklemek istediginiz elemaný girin...");
				scanf("%d", &basa);
				basaEkle(basa);
				yazdir();
				break;
			case 3:
				printf("\n Hangi sayinin onune ekleme yapacaksin?...");
				scanf("%d", &x);
				printf("\n Hangi sayiyi gireceksiniz?...");
				scanf("%d",&y);
				arayaEkle(x ,y);
				yazdir();
				break;
			case 4:
				sondanSil();
				yazdir();
				break;
			case 5:
				bastanSil();
				yazdir();
				break;	
			case 6:
				printf("\nSilinmesini istediginiz sayiyi giriniz..");
			    scanf("%d",&secim);
			    aradanSil(secim);
				yazdir();
				break;	
			default:
				printf("Gecersiz secenek.Lütfen tekrar deneyin.\n");
	}
}
return 0;
}
