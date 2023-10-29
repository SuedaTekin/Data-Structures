#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Kar��la�t�rma fonksiyonu
int karsilastir(const void *a, const void *b) {
    return (*(int*)b - *(int*)a);
}

int main() {
    int liste[100];

    // Rastgele say�lar� listeye ekleyin
    srand(time(NULL));
    for (int i = 0; i < 100; i++) {
        liste[i] = rand() % 1000;  // 0 ile 999 aras�nda rastgele say�lar
    }

    // S�ralama i�lemi
    qsort(liste, 100, sizeof(int), karsilastir);
    for (int i = 0; i < 100; i++) {
         printf("%d ", liste[i]);
    }
    // S�ralanm�� listeyi ekrana yazd�r�n
    printf("Siralanan liste: ");
  

    return 0;
}
