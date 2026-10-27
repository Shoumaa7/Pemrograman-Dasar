#include <stdio.h>

int reverse(int number) {
    int reversed = 0;
    
    while (number != 0) {
        int remainder = number % 10;
        reversed = reversed * 10 + remainder;
        number /= 10;
    }
    
    return reversed;
}

int main() {
    int A, B;
    
    printf("\nMasukkan 2 Angka : ");
    scanf("%d %d", &A, &B);
    
    A = reverse(A);
    B = reverse(B);
    
    int C = A + B;
    printf("\nHasil : %d\n\n", reverse(C));

    return 0;
}