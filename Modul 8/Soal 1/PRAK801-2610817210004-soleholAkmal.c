#include <stdio.h>

int main() {
    int value;
    int *p = &value;

    printf("\n");
    scanf("%d", &value);

    printf("\nNilai variabel = %d", value);
    printf("\nAlamat variabel = %p", p);
    printf("\nNilai melalui pointer = %d", *p);
    printf("\nNilai setelah diubah lewat pointer = %d\n\n", *p * 2);
} 