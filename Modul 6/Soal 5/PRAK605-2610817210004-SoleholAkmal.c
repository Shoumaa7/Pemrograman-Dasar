#include <stdio.h>

int main() {
    printf("\n");

    int order;
    scanf("%d", &order);

    int matrixA[order][order];
    int matrixB[order][order]; 

    printf("Matriks A\n");
    for (int i = 0; i < order; i++) {
        for (int j = 0; j < order; j++) {
            scanf("%d", &matrixA[i][j]);
        }
    } 

    printf("Matriks B\n");
    for (int i = 0; i < order; i++) {
        for (int j = 0; j < order; j++) {
            scanf("%d", &matrixB[i][j]);
        }
    } 
    printf("\n");

    printf("Matriks AXB\n");
    for (int i = 0; i < order; i++) {
        for (int j = 0; j < order; j++) {
            int total = 0;
            for (int k = 0; k < order; k++) {
                total += matrixA[i][k] * matrixB[k][j];
            }
            if (j > 0) {
                printf(" ");
            }
            printf("%d", total);
        }
        printf("\n");
    }

    printf("\n"); 
}

// 
// 
// 
// 
// 