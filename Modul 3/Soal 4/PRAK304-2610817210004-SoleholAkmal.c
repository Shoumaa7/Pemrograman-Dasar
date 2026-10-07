#include <stdio.h>

int main() {
    int value;  

    printf("\nMasukkan Nilai : ");
    scanf("%d", &value);

    if (value >= 100) {
        printf("\nAnda Menginput Melebihi Limit Bilangan\n\n");
    } else if (value == 0) {
        printf("\nBilangan Nol\n\n");
    } else if (value < 10 && value > 0) { 
        printf("\nBilangan Satuan\n\n");
    } else if (value > 10 && value < 20) {
        printf("\nBilangan Belasan\n\n");
    } else if (value > 20 && value < 100) {
        printf("\nBilangan Puluhan\n\n");
    } else {
        printf("\nBilangan Negatif\n\n");
    }

    return 0;
}