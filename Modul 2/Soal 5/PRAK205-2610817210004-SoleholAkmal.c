#include <stdio.h>
#include <math.h>

int main() {
    int sideA, sideB;

    printf("\nSisi A : ");
    scanf("%d", &sideA);

    printf("Sisi B : ");
    scanf("%d", &sideB);

    int sideC = sqrt(sideB * sideB - sideA * sideA);

    int perimeter = sideA + sideB + sideC;
    int area = (0.5 * sideC * sideA);

    printf("\nAlas = %d cm", sideC);
    printf("\nTinggi = %d cm", sideA);
    printf("\nKeliling = %d cm", perimeter);
    printf("\nLuas = %d cm^2\n\n", area);

    return 0;
}