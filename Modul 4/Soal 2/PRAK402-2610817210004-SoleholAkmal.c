#include <stdio.h>

int main() {
    int value;

    printf("\nMasukkan Batas : ");
    scanf("%d", &value);

    printf("\n");
    
    for(int i = 1; i <= value; i++) {
        if(i % 2 == 1) {
            printf("%d ", i);
        }
    }
    
    printf("\n");
    
    for(int i = value; i > 1; i--) {
        if(i % 2 == 0) {
            printf("%d ", i);
        }
    }

    printf("\n\n");
    
    return 0;
} 