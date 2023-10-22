#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node *next;
	
};
struct node* start =NULL;
struct node* temp =NULL;
struct node* q= NULL;

void basaEkle(int basa){
	struct node *basaGelecek = (struct node*)malloc(sizeof(struct node));
	basaGelecek->data=basa;
	basaGelecek->next=start;
	start=basaGelecek;
}
int main(){
	int secim, sona, basa;
	while(1==1){
		printf("\n1- sona Eleman Ekle");
		printf("\n2- Basa Eleman Ekle");
		printf("\n Yapmak istediðiniz iþlemi secin\n");
		scanf("%d", &secim);
		
		switch(secim){
			case 1:
			printf("\n Sona eklemek istediðiniz elemani girin...");
			scanf("%d",&sona);
			sonaEkle(sona);
			yazdir();
			break;
			case 2:
			printf("\n Basa eklemek istediðiniz elemani girin...");
			scanf("%d",&basa);
			basaEkle(basa);
			yazdir();
			break;
		}
	}
}
