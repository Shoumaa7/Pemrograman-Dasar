#include <stdio.h>

int main() {
    int sisi1 = 4;
    int sisi2 = 5;
    int sisi3 = 7;
    int keliling = sisi1 + sisi2 + sisi3;
    int hargaTanah = 85000;

    printf("\nDiketahui:");
    printf("\nPanjang sisi segitiga berturut-turut adalah %d, %d, %d", sisi1, sisi2, sisi3);
    printf("\nKeliling tanah pak dengklek adalah %d", keliling);
    printf("\nHarga tanah per meter adalah %d", hargaTanah);
    printf("\nJawaban:");
    printf("\nBiaya yang diperlukan pak Dengklek adalah %d\n\n", keliling * hargaTanah);

    return 0;
}