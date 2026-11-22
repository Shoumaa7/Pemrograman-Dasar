#include <stdio.h>

int main() {
    int value;
    int *p = &value;

    printf("\n");
    scanf("%d", &value);

    printf("\nNilai variabel = %d", value);
    printf("\nAlamat variabel = %p", p);
    printf("\nNilai melalui pointer = %d", *p);

    *p = *p * 2;
    printf("\nNilai setelah diubah lewat pointer = %d\n\n", value);
} 
