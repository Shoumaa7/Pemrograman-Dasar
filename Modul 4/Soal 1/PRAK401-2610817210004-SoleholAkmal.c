#include <stdio.h>

int main() {
    int value;
    char symbol[50]; 

    printf("\nMasukkan Angka : ");
    scanf("%d", &value);
    
    printf("Masukkan Simbol : ");
    scanf("%s", symbol);
    
    printf("\n\n");
    
    for (int i = 0; i < 50; i++) {
        if ((i + 1) % value == 0) {
            printf("%s ", symbol);
        } else {
            printf("%d ", i + 1);
        }
    }
    
    printf("\n\n");
    
    return 0;
}