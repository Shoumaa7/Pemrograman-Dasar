#include <stdio.h>

void biodata(int a, char b[20], char c[15]){
    int currentYear = 2020;

    printf("\nPerkenalkan Nama Saya : %s", b);
    printf("\nUmur Saya : %d", currentYear - a);
    printf("\nSaya Adalah Angkatan : %d", currentYear);
    printf("\nAsal Saya Dari : %s\n\n", c);
}

int main() {
    int birthYear;
    char name[20], city[15];

    printf("\nMasukkan Tahun Lahir : ");
    scanf(" %d", &birthYear);

    printf("Masukkan Nama : ");
    scanf(" %[^\n]%*c", name);

    printf("Masukkan Kota : ");
    scanf(" %[^\n]%*c", city);

    biodata(birthYear, name, city);

    return 0;
}
