#include <stdio.h>

int main() {
    float firstValue, secondValue;

    printf("\nMasukkan Nilai Pertama : ");
    scanf("%f", &firstValue);

    printf("Masukkan Nilai Kedua : ");
    scanf("%f", &secondValue);

    printf("\nHasil Dari Penjumlahan Nilai Pertama %g Dan Nilai Kedua %g Adalah %.2f\n\n", firstValue, secondValue, firstValue + secondValue);

    return 0;
}