#include <stdio.h>

int main() {
    float shoesA = 400000;
    float shoesB = 350000;

    printf("\nHarga sepatu A adalah %.0f", shoesA);
    printf("\nHarga sepatu B adalah %.0f", shoesB);
    
    printf("\nSepatu A mendapat diskon 13%% sehingga harganya menjadi %.0f", shoesA - (shoesA * 13 / 100));
    printf("\nSepatu B mendapat diskon 21%% sehingga harganya menjadi %.0f\n\n", shoesB - (shoesB * 21 / 100));

    return 0;
}