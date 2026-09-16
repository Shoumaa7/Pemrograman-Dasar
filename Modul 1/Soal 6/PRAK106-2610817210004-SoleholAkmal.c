#include <stdio.h>

int main() {
    int a = 4;
    int b = 8;
    int c = 3;

    printf("\nVariabel a bernilai %d", a);
    printf("\nVariabel b bernilai %d", b);
    printf("\nVariabel c bernilai %d", c);

    printf("\nApakah a sama dengan b? jawabannya adalah %d", a == b);
    printf("\nApakah b lebih besar dari c? jawabannya adalah %d", b > c);
    printf("\nApakah a tidak sama dengan c? jawabannya adalah %d\n\n", a != c);

    return 0;
}