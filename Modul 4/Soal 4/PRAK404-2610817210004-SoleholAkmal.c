#include <stdio.h>

int main() {
    int choice;
    double value1, value2;

    while (1) {
        printf("\n===== Pilih Program =====\n");
        printf("1. Penjumlahan\n");
        printf("2. Pengurangan\n");
        printf("3. Perkalian\n");
        printf("4. Pembagian\n");
        printf("5. Exit\n\n");

        printf("Masukkan Pilihan : ");
        
        if (scanf("%d", &choice) != 1) {
            printf("\nInput Yang Dimasukkan Bukan Angka, Silahkan Coba Lagi\n\n");
            while (getchar() != '\n');
            continue;
        }

        if (choice < 1 || choice > 5) {
            printf("\nInput Anda Salah, Silahkan Coba Lagi\n\n");
            continue;
        }

        switch (choice) {
            case 1:
                printf("\nMasukkan Nilai Pertama : ");
                scanf("%lf", &value1);
                printf("Masukkan Nilai Kedua : ");
                scanf("%lf", &value2);
                printf("\nHasil Penjumlahan Antara %.2f dengan %.2f Adalah %.2f\n\n", value1, value2, value1 + value2);
                break;

            case 2:
                printf("\nMasukkan Nilai Pertama : ");
                scanf("%lf", &value1);
                printf("Masukkan Nilai Kedua : ");
                scanf("%lf", &value2);
                printf("\nHasil Pengurangan Antara %.2f dengan %.2f Adalah %.2f\n\n", value1, value2, value1 - value2);
                break;

            case 3:
                printf("\nMasukkan Nilai Pertama : ");
                scanf("%lf", &value1);
                printf("Masukkan Nilai Kedua : ");
                scanf("%lf", &value2);
                printf("\nHasil Perkalian Antara %.2f dengan %.2f Adalah %.2f\n\n", value1, value2, value1 * value2);
                break;

            case 4:
                printf("\nMasukkan Nilai Pertama : ");
                scanf("%lf", &value1);
                printf("Masukkan Nilai Kedua : ");
                scanf("%lf", &value2);
                if (value2 == 0) {
                    printf("\nError: Pembagian dengan nol tidak diperbolehkan!\n\n");
                } else {
                    printf("\nHasil Pembagian Antara %.2f dengan %.2f Adalah %.2f\n\n", value1, value2, value1 / value2);
                }
                break;

            case 5:
                printf("\nTerimakasih Telah Menggunakan Kalkulator Solehol Akmal\n\n");
                return 0;
        }
    }

    return 0;
}