#include <stdio.h>

int main() {
    int value1, value2;

    printf("\nMasukkan 2 Angka : ");
    scanf("%d %d", &value1, &value2);
    printf("\n");

    int x = value1;
    int y = value2;

    while (1) {
        printf("%d %d", value1, value2);

        if (value1 == y && value2 == x) {
            break;
        }

        if (x <= y) {
            value1 += 1;
            value2 -= 1;
        } else {
            value1 -= 1;
            value2 += 1;
        }

        printf(" - ");
    }

    printf("\n\n");

    return 0;
}