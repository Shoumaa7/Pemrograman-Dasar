#include <stdio.h>

int main() {
    int a = 9;
    int b = 5;
    int x = 8;
    int y = 8;

    printf("\nVariabel a bernilai %d", a);
    printf("\nVariabel b bernilai %d", b);
    printf("\nVariabel x bernilai %d", x);
    printf("\nVariabel y bernilai %d", y);

    printf("\nTotal sisa bagi dari a dibagi b dan x dibagi y adalah %d\n\n", (a % b) + (x % y));

    return 0; 
}