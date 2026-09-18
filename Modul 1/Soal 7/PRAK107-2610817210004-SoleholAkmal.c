#include <stdio.h>

int main() {
    int side1 = 4;
    int side2 = 5;
    int side3 = 7;
    int perimeter = side1 + side2 + side3;
    int landPrice = 85000;

    printf("\nDiketahui:");
    printf("\nPanjang sisi segitiga berturut-turut adalah %d, %d, %d", side1, side2, side3);
    printf("\nKeliling tanah pak dengklek adalah %d", perimeter);
    printf("\nHarga tanah per meter adalah %d", landPrice);
    printf("\nJawaban:");
    printf("\nBiaya yang diperlukan pak Dengklek adalah %d\n\n", perimeter * landPrice);

    return 0;
}