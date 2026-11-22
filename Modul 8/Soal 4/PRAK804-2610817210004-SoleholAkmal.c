#include <stdio.h>
#include <string.h>

struct Peserta {
    char name[100];
    int age;
    int score;
};

int main() {
    int n, result; 
    char nameResult[100];

    printf("\n");
    scanf("%d", &n);

    struct Peserta p[n];

    for (int i = 0; i < n; i++) {
        scanf("%s %d %d", p[i].name, &p[i].age, &p[i].score);

        if (i == 0 || p[i].score > result) {
            result = p[i].score;
            strcpy(nameResult, p[i].name);
        }
    }

    printf("\nPeserta dengan skor tertinggi adalah %s dengan skor %d\n\n", nameResult, result);
} 
