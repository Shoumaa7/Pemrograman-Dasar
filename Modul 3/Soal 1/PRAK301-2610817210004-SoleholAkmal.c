#include <stdio.h>

int main() {
    int value1, value2;

    printf("\nAngka 1 : ");
    scanf("%d", &value1);

    printf("Angka 2 : ");
    scanf("%d", &value2);

    if (value1 < value2) {
        printf("\nHasil : %d %d\n\n", value1, value2);
    } else {
        printf("\nHasil : %d %d\n\n", value2, value1);
    }

    return 0;
}