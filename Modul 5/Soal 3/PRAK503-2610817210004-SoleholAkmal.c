#include <stdio.h>

int maximum(int a, int b) {
    if (b > a) {
        return b;
    } else {
        return a;
    }
}

int minimum(int a, int b) {
    if (b < a) {
        return b;
    } else {
        return a;
    }
}

int main(){
    int limit = 0;
    int max = -100000;
    int min = 100000;
    int number;

    printf("\nMasukkan Jumlah Angka : ");
    scanf("%d", &number);

    printf("Masukkan %d Angka : ", number);
    while(limit < number) {
        int value;

        scanf("%d", &value);

        max = maximum(max, value);
        min = minimum(min, value);

        limit++;
    }

    printf("\nNilai Terbesar : %d, Nilai Terkecil : %d\n\n", max, min);

    return 0;
}