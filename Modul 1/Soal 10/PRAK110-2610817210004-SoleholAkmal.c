#include <stdio.h>
#include <math.h>

int main() {
    int base = 5;
    int height = 12;
    int hypotenuse = sqrt((base * base) + (height * height));

    int perimeter = height + hypotenuse + base;
    int area = 0.5 * base * height;

    printf("\nDiketahui :");
    printf("\nAlas = %d", base);
    printf("\nTinggi = %d", height);
    printf("\n\nJawab :");
    printf("\nSisi A = %d", height);
    printf("\nSisi B = %d", hypotenuse);
    printf("\nSisi C = %d", base);
    printf("\nKeliling = %d", perimeter);
    printf("\nLuas = %d\n\n", area);

    return 0;
}