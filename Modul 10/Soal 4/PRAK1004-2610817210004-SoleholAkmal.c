#include <stdio.h>

long long hanoiMoves(int n) {
    if (n == 1) {
        return 1;
    } else {
        return 2 * hanoiMoves(n - 1) + 1;
    }
}

int main() {
    int number;
    
    printf("\nMasukkan Jumlah Cakram : ");
    scanf("%d", &number);
    
    printf("\nJumlah langkah minimum untuk %d cakram adalah %lld\n\n", number, hanoiMoves(number));
    
    return 0;
}