#include <stdio.h>

int main() {
    float a = 9;
    float b = 6;
    float x = 10;
    float y = 7;
    float total = (a + b) * x / y;

    printf("\nVariabel a bernilai %.0f", a);
    printf("\nVariabel b bernilai %.0f", b);
    printf("\nVariabel x bernilai %.0f", x);
    printf("\nVariabel y bernilai %.0f", y);
    printf("\nHasil dari a ditambah b dikali x dan dibagi y adalah %.2f\n\n", total);

    return 0;
}