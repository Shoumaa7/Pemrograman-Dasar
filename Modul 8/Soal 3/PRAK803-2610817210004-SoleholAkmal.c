#include <stdio.h>
#include <string.h>

struct Peserta {
    char name[100];
    int age;
    int score;
};

int main() {
    struct Peserta p1;

    printf("\nNama : ");
    fgets(p1.name, sizeof(p1.name), stdin);
    p1.name[strcspn(p1.name, "\r\n")] = '\0';
    
    printf("Umur : ");
    scanf("%d", &p1.age);

    printf("Skor : ");
    scanf("%d", &p1.score);

    printf("\nData Peserta:");
    printf("\nNama : %s", p1.name);
    printf("\nUmur : %d tahun", p1.age);
    printf("\nSkor : %d\n\n", p1.score);
} 
