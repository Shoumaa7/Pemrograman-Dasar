#include <stdio.h>

int main() {
    float putaran = 5;
    float jarakTempuh = 14;

    float keliling = jarakTempuh / putaran;
    float jariJari = keliling / (2 * 3.14);

    printf("\nDiketahui:");
    printf("\nPak Dengklek mengelilingi taman = %.0f putaran", putaran);
    printf("\nJarak tempuh pak Dengklek = %.0f kilometer\n", jarakTempuh);
    printf("\nJawaban:");
    printf("\nJari-jari taman yang dikelilingi pak dengklek adalah %.2f\n\n", jariJari);

    return 0;
}