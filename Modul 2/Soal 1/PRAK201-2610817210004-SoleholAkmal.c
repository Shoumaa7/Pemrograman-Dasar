#include <stdio.h>

int main() {
    char name[100];
    char id[20];
    char parallelClass[100];
    char birthPlaceAndDate[100];
    char address[200];
    char hobby[100];
    char phoneNumber[20];

    printf("\nInput Data Mahasiswa\n");
    printf("Nama : ");
    scanf(" %[^\n]", name);

    printf("NIM : ");
    scanf("%s", id);

    printf("Kelas Paralel : ");
    scanf(" %[^\n]", parallelClass);

    printf("Tempat/Tanggal Lahir : ");
    scanf(" %[^\n]", birthPlaceAndDate);

    printf("Alamat : ");
    scanf(" %[^\n]", address);

    printf("Hobi : ");
    scanf(" %[^\n]", hobby);

    printf("Nomor HP : ");
    scanf("%s", phoneNumber);

    printf("\n------------------------------------------------------\n");
    printf("\nNama                 : %s", name);
    printf("\nNIM                  : %s", id);
    printf("\nKelas Paralel        : %s", parallelClass);
    printf("\nTempat/Tanggal Lahir : %s", birthPlaceAndDate);
    printf("\nAlamat               : %s", address);
    printf("\nHobi                 : %s", hobby);
    printf("\nNomor HP             : %s\n\n", phoneNumber);

    return 0;
}