#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Öðrenci bilgilerini saklamak için kullanýlan struct
struct Ogrenci {
    int numara;
    char isim[50];
    int yas;
    struct Ogrenci* sonraki;
};

// Yeni bir öðrenci düðümü oluþturur
struct Ogrenci* yeniOgrenci(int numara, const char* isim, int yas) {
    struct Ogrenci* ogrenci = (struct Ogrenci*)malloc(sizeof(struct Ogrenci));
    ogrenci->numara = numara;
    strcpy(ogrenci->isim, isim);
    ogrenci->yas = yas;
    ogrenci->sonraki = NULL;
    return ogrenci;
}

// Baðlý listeye öðrenci düðümünü ekler
void ogrenciEkle(struct Ogrenci** bas, int numara, const char* isim, int yas) {
    struct Ogrenci* yeni = yeniOgrenci(numara, isim, yas);
    yeni->sonraki = *bas;
    *bas = yeni;
}

// Öðrenci adýna göre kayýt arayan fonksiyon
struct Ogrenci* ogrenciAra(struct Ogrenci* bas, const char* isim) {
    struct Ogrenci* temp = bas;

    while (temp != NULL) {
        if (strcmp(temp->isim, isim) == 0) {
            return temp;
        }
        temp = temp->sonraki;
    }

    return NULL; // Bulunamadý
}

int main() {
    struct Ogrenci* ogrenciListesi = NULL;

    // Öðrenci düðümlerini ekleyin
    ogrenciEkle(&ogrenciListesi, 1, "Ahmet", 20);
    ogrenciEkle(&ogrenciListesi, 2, "Mehmet", 21);
    ogrenciEkle(&ogrenciListesi, 3, "Ayse", 19);

    // Öðrenci adýna göre kayýt arama
    const char* arananIsim = "Mehmet";
    struct Ogrenci* sonuc = ogrenciAra(ogrenciListesi, arananIsim);

    if (sonuc != NULL) {
        printf("Bulunan Kayit:\n");
        printf("Ogrenci Numarasi: %d\n", sonuc->numara);
        printf("isim: %s\n", sonuc->isim);
        printf("Yas: %d\n", sonuc->yas);
    } else {
        printf("Kayit bulunamadi: %s\n", arananIsim);
    }

    return 0;
}

