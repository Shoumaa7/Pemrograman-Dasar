#include <stdio.h>
#include <math.h>

int count(int value1, int value2) {
    return value1 - value2;
}

int absolute(int value) {
    return abs(value);
}

int main() {
    int a,b,c,d;

    printf("\nMasukkan 4 Angka : ");
    scanf("%d %d %d %d", &a, &c, &b, &d);

    int result = count(a, b) + count(c, d);
    printf("\nHasil : %d\n\n", absolute(result));

    return 0;
}