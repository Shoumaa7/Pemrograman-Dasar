#include <stdio.h>

int main() {
    int yuzhongArmy = 958730;
    int totalHeroes = 5;

    printf("\nJumlah pasukan yang dibawa Yu Zhong = %d", yuzhongArmy);
    printf("\nJumlah pahlawan = %d", totalHeroes);
    printf("\nJumlah pasukan yang harus dikalahkan setiap pahlawan adalah %d pasukan\n\n", yuzhongArmy / totalHeroes);

    return 0;
}