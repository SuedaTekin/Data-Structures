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

// En uzun isimli ��renciyi bulan ve bilgilerini yazan fonksiyon
void enUzunIsimliOgrenciyiBul(struct Ogrenci* bas) {
    struct Ogrenci* temp = bas;
    struct Ogrenci* enUzunIsimli = bas;

    while (temp != NULL) {
        if (strlen(temp->isim) > strlen(enUzunIsimli->isim)) {
            enUzunIsimli = temp;
        }
        temp = temp->sonraki;
    }

    printf("En Uzun isimli Ogrenci:\n");
    printf("Ogrenci Numarasi: %d\n", enUzunIsimli->numara);
    printf("isim: %s\n", enUzunIsimli->isim);
    printf("Yas: %d\n", enUzunIsimli->yas);
}

int main() {
    struct Ogrenci* ogrenciListesi = NULL;

    // ��renci d���mlerini ekleyin
    ogrenciEkle(&ogrenciListesi, 1, "Musa", 30);
    ogrenciEkle(&ogrenciListesi, 2, "Ece", 5);
    ogrenciEkle(&ogrenciListesi, 3, "Ali", 14);
    ogrenciEkle(&ogrenciListesi, 4, "Abdurrahman", 56);

    // En uzun isimli ��renciyi bulun ve bilgilerini yazd�r�n
    enUzunIsimliOgrenciyiBul(ogrenciListesi);

    return 0;
}

