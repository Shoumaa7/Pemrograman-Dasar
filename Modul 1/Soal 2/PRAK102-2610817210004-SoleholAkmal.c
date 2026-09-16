#include <stdio.h>

int main() {
    float a = 4;
    float b = 8;
    float c = 3;
    float total = a * b / c;

    printf("\nVariabel a bernilai %.0f", a);
    printf("\nVariabel b bernilai %.0f", b);
    printf("\nVariabel c bernilai %.0f", c);
    printf("\nHasil dari a dikali b dibagi c adalah %.6f\n\n", total);

    return 0;
}