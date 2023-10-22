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

    // Veri giriþi
    printf("Sicil: ");
    scanf("%d", &sahis.sicil);

    printf("Ad: ");
    scanf("%s", sahis.ad);

    printf("Soyad: ");
    scanf("%s", sahis.soyad);

    printf("Brüt Maaþ: ");
    scanf("%f", &sahis.brut);

    printf("Yaþ: ");
    scanf("%d", &sahis.yas);

    printf("Cins (1: Erkek, 2: Kadýn): ");
    scanf("%d", &sahis.cins);

    // Verileri ekrana yazdýrma
    printf("Sicil: %d\n", sahis.sicil);
    printf("Ad: %s\n", sahis.ad);
    printf("Soyad: %s\n", sahis.soyad);
    printf("Brüt Maaþ: %.2f\n", sahis.brut);
    printf("Yaþ: %d\n", sahis.yas);
    printf("Cins: %s\n", sahis.cins == 1 ? "Erkek" : "Kadýn");

    return 0;
}
