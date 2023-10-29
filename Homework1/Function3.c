#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ��renci bilgilerini saklamak i�in kullan�lan struct
struct Ogrenci {
    int numara;
    char isim[50];
    int yas;
    struct Ogrenci* sonraki;
};

// Yeni bir ��renci d���m� olu�turur
struct Ogrenci* yeniOgrenci(int numara, const char* isim, int yas) {
    struct Ogrenci* ogrenci = (struct Ogrenci*)malloc(sizeof(struct Ogrenci));
    ogrenci->numara = numara;
    strcpy(ogrenci->isim, isim);
    ogrenci->yas = yas;
    ogrenci->sonraki = NULL;
    return ogrenci;
}

// Ba�l� listeye ��renci d���m�n� ekler
void ogrenciEkle(struct Ogrenci** bas, int numara, const char* isim, int yas) {
    struct Ogrenci* yeni = yeniOgrenci(numara, isim, yas);
    yeni->sonraki = *bas;
    *bas = yeni;
}

// Ba�l� listedeki ��renci d���mlerini dola�an ve bilgilerini yazan fonksiyon
void ogrenciBilgileriniYaz(struct Ogrenci* bas) {
    struct Ogrenci* temp = bas;
    int ogrenciSayisi = 0;

    while (temp != NULL) {
        printf("Ogrenci Numarasi: %d\n", temp->numara);
        printf("isim: %s\n", temp->isim);
        printf("Yas: %d\n", temp->yas);
        printf("\n");
        ogrenciSayisi++;
        temp = temp->sonraki;
    }

    printf("Toplam Ogrenci Sayisi: %d\n", ogrenciSayisi);
}

int main() {
    struct Ogrenci* ogrenciListesi = NULL;

    // ��renci d���mlerini ekleyin
    ogrenciEkle(&ogrenciListesi, 1, "Ahmet", 20);
    ogrenciEkle(&ogrenciListesi, 2, "Mehmet", 21);
    ogrenciEkle(&ogrenciListesi, 3, "Ayse", 19);

    // ��renci bilgilerini yazd�r�n ve say�n
    ogrenciBilgileriniYaz(ogrenciListesi);

    return 0;
}


