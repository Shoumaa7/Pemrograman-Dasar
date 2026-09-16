#include <stdio.h>

int main() {
    float sepatuA = 400000;
    float sepatuB = 350000;

    printf("\nHarga sepatu A adalah %.0f", sepatuA);
    printf("\nHarga sepatu B adalah %.0f", sepatuB);
    
    printf("\nSepatu A mendapat diskon 13%% sehingga harganya menjadi %.0f", sepatuA - (sepatuA * 13 / 100));
    printf("\nSepatu B mendapat diskon 21%% sehingga harganya menjadi %.0f\n\n", sepatuB - (sepatuB * 21 / 100));

    return 0;
}