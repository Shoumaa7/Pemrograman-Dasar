#include <stdio.h>

int main() {
    printf("\n");

    int firstSize, secondSize;
    scanf("%d %d", &firstSize, &secondSize);

    if (firstSize != secondSize) {
        printf("\n");
        printf("Jumlah tidak sama\n");
        printf("\n");
        return 0;
    }

    int firstRow[firstSize];
    int secondRow[firstSize];

    for (int i = 0; i < firstSize; i++) {
        scanf("%d", &firstRow[i]);
    }
    for (int i = 0; i < firstSize; i++) {
        scanf("%d", &secondRow[i]);
    }

    printf("\n");
    for (int i = 0; i < firstSize; i++) {
        if (i > 0) {
            printf(" ");
        }
        printf("%d", firstRow[i] * secondRow[i]);
    }
    printf("\n");
    printf("\n");

    return 0;
} 