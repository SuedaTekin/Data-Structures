#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct PERSON{
	int sicil;
	char ad[15];
	char soyad[15];
	float brut;
	int yas;
	int cins;
}PERS;

int main() {
    PERS sahis;

    // Veri giri�i
    printf("Sicil: ");
    scanf("%d", &sahis.sicil);

    printf("Ad: ");
    scanf("%s", sahis.ad);

    printf("Soyad: ");
    scanf("%s", sahis.soyad);

    printf("Br�t Maa�: ");
    scanf("%f", &sahis.brut);

    printf("Ya�: ");
    scanf("%d", &sahis.yas);

    printf("Cins (1: Erkek, 2: Kad�n): ");
    scanf("%d", &sahis.cins);

    // Verileri ekrana yazd�rma
    printf("Sicil: %d\n", sahis.sicil);
    printf("Ad: %s\n", sahis.ad);
    printf("Soyad: %s\n", sahis.soyad);
    printf("Br�t Maa�: %.2f\n", sahis.brut);
    printf("Ya�: %d\n", sahis.yas);
    printf("Cins: %s\n", sahis.cins == 1 ? "Erkek" : "Kad�n");

    return 0;
}
