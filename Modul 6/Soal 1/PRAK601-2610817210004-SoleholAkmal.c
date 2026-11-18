#include <stdio.h>

int main() {
    int row, column;

    printf("\n");
    scanf("%d %d", &row, &column);
    
    int matrix[row][column];
    
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("\n");
    
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}