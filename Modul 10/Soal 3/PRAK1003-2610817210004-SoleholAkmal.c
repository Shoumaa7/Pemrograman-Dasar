#include <stdio.h>

int totalDigit(int n) {
    if (n == 0) {
        return 0;
    } else {
        return (n % 10) + totalDigit(n / 10);
    }
}

int main() {
    int number;
    
    printf("\nMasukkan Bilangan Bulat Positif: ");
    scanf("%d", &number);
    
    printf("\nJumlah digit dari %d adalah %d\n\n", number, totalDigit(number));
    
    return 0;
}