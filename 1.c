#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct kitap {
	char kitapAdi[30];
	float fiyat;
	int sayfa;
};

typedef  struct{
	char adSoyad[30];
	int yas;
}yazar;

int main(){
	//Direct
	struct kitap kitap1;
	strcpy(kitap1.kitapAdi, "Turklerin Tarihi");
	kitap1.fiyat = 17.50;
	kitap1.sayfa = 350;
	
	//Undirect
	struct kitap *kitap2 = (struct kitap *)malloc(sizeof(struct kitap));
	strcpy(kitap2->kitapAdi,"Fabrika Ayarý");
	kitap2->fiyat = 16.50;
	kitap2->sayfa = 300;
	
   // printf("Bilgiler: %s %f %d", kitap->kitapAdi, kitap2->fiyat, kitap2->sayfa);

   //Typedef ile Kullaným
   yazar yazar1;
   strcpy(yazar1.adSoyad,"Ýlber Ortayli");
   yazar1.yas =74;
   
   //Typedef- undirect
   yazar *yazar2= (yazar *)malloc(sizeof(yazar));
   strcpy(yazar2->adSoyad,"Hayat Bakisi");
   yazar2->yas = 60;
   
   printf("Yazar 1: %s %d \n", yazar1.adSoyad,yazar1.yas);
   printf("Yazar 2: %s %d ",yazar2->adSoyad,yazar2->yas );
	return 1;
}

