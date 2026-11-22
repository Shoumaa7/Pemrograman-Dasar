#include <stdio.h>

void tukar (int *p1, int *p2);

int main() {
    int AndiChair, BudiChair;
    
    printf("\n");
    scanf("%d %d", &AndiChair, &BudiChair);
    
    printf("Sebelum ditukar: Andi = %d, Budi = %d", AndiChair, BudiChair);
    tukar(&AndiChair, &BudiChair);
    printf("\nSesudah ditukar: Andi = %d, Budi = %d\n\n", AndiChair, BudiChair);
}

void tukar (int *p1, int *p2) {
    int temp = *p1;

    *p1 = *p2;
    *p2 = temp;
} 
