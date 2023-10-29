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

// ��renci ad�na g�re kay�t arayan fonksiyon
struct Ogrenci* ogrenciAra(struct Ogrenci* bas, const char* isim) {
    struct Ogrenci* temp = bas;

    while (temp != NULL) {
        if (strcmp(temp->isim, isim) == 0) {
            return temp;
        }
        temp = temp->sonraki;
    }

    return NULL; // Bulunamad�
}

int main() {
    struct Ogrenci* ogrenciListesi = NULL;

    // ��renci d���mlerini ekleyin
    ogrenciEkle(&ogrenciListesi, 1, "Ahmet", 20);
    ogrenciEkle(&ogrenciListesi, 2, "Mehmet", 21);
    ogrenciEkle(&ogrenciListesi, 3, "Ayse", 19);

    // ��renci ad�na g�re kay�t arama
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

