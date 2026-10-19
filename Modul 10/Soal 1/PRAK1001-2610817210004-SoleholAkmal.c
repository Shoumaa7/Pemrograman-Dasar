#include <stdio.h>

long long factorial(int n) {
    if (n <= 1) {
        return 1;
    } else {
        return ((long long) n) * factorial(n - 1);
    }
}

int main() {
    int number;

    while (1) {
        printf("\nMasukkan Angka : ");
        scanf("%d", &number);

        if (number < 0) {
            printf("\nMasukkan Angka Positif!!\n");
            printf("--------------------------------\n");
            continue;
        } else {
            printf("\nHasil %d! = %lld\n\n", number, factorial(number));
            break;
        }
    }

    return 0;
}