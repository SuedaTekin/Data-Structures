#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Karþýlaþtýrma fonksiyonu
int karsilastir(const void *a, const void *b) {
    return (*(int*)b - *(int*)a);
}

int main() {
    int liste[100];

    // Rastgele sayýlarý listeye ekleyin
    srand(time(NULL));
    for (int i = 0; i < 100; i++) {
        liste[i] = rand() % 1000;  // 0 ile 999 arasýnda rastgele sayýlar
    }

    // Sýralama iþlemi
    qsort(liste, 100, sizeof(int), karsilastir);
    for (int i = 0; i < 100; i++) {
         printf("%d ", liste[i]);
    }
    // Sýralanmýþ listeyi ekrana yazdýrýn
    printf("Siralanan liste: ");
  

    return 0;
}
