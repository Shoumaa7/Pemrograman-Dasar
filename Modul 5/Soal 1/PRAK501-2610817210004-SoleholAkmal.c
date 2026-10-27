#include <stdio.h>

int maxValue(int a, int b, int c, int d) {
    int max = a;

    if (b > max) max = b;
    if (c > max) max = c;
    if (d > max) max = d;

    return max;    
}

int main() {
    int a, b, c, d;

    printf("\nMasukkan 4 Angka : ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    int result = maxValue(a, b, c, d);
    printf("\nBilangan Terbesar Adalah : %d\n\n", result);

    return 0;
}