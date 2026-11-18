#include <stdio.h>

int main() {
    int total;
    
    printf("\n");
    scanf("%d", &total);

    int amounts[total];
    for (int i = 0; i < total; i++) {
        scanf("%d", &amounts[i]);
    }

    printf("\n");
    for (int i = 0; i < total; i++) {
        if (i > 0) {
            printf(" ");
        }
        printf("%d", amounts[i] * (i + 1));
    }
    printf("\n\n");

    return 0;
}