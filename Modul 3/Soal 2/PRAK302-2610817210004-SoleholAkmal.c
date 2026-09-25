#include <stdio.h>

int main() {
    int value;

    printf("\nNilai : ");
    scanf("%d", &value);

    if (value >= 80) {
        printf("\nPredikat : A\n\n");
    } else if (value >= 70) {
        printf("\nPredikat : B\n\n");
    } else if (value >= 60) {
        printf("\nPredikat : C\n\n");
    } else if (value >= 50) {
        printf("\nPredikat : D\n\n");
    } else {
        printf("\nPredikat : E\n\n");
    }

    return 0;
}