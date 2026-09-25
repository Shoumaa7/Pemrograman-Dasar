#include <stdio.h>

int main() {
    int n;

    printf("\nNilai N : ");
    scanf("%d", &n);

    if (n > 0) {
        printf("\nBilangan N Positif\n\n");
    } else if (n < 0) {
        printf("\nBilangan N Negatif\n\n");
    } else {
        printf("\nBilangan N 0\n\n");
    }

    return 0;
} 