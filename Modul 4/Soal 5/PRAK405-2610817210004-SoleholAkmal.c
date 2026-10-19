#include <stdio.h>

int main() {
    int n, multiple;
    int total = 0;

    printf("\nMasukkan Banyaknya N : ");
    scanf("%d", &n);

    printf("Masukkan Kelipatan : ");
    scanf("%d", &multiple);
    printf("\n");

    for (int i = 1; i <= n; i++) {
        int subTotal = 0;

        for (int j = i; j > 0; j--) {
            int result = j * multiple;
            subTotal += result;

            printf("(%d * %d)", j, multiple);

            if (j > 1) {
                printf(" + ");
            }
        }
        printf(" = %d\n", subTotal);
        total += subTotal;
    }

    printf("\nHasil = %d\n\n", total);

    return 0;
}