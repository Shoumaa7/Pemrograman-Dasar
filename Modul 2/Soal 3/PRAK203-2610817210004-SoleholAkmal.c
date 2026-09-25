#include <stdio.h>

int main() {
    float a, b, i, j, x, y;
    float result;

    printf("\nNilai a : ");
    scanf("%f", &a);

    printf("Nilai b : ");
    scanf("%f", &b);

    printf("Nilai i : ");
    scanf("%f", &i);

    printf("Nilai j : ");
    scanf("%f", &j);

    printf("Nilai x : ");
    scanf("%f", &x);

    printf("Nilai y : ");
    scanf("%f", &y);

    result = (((a - b) * i) / j) - (x + y);

    printf("\nHasil Perhitungan : %.3f\n\n", result);

    return 0;
}