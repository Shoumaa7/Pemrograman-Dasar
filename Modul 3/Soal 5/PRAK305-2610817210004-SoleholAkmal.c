#include <stdio.h>

int main() {
    int totalSecond;

    printf("\nMasukkan detik : ");
    scanf("%d", &totalSecond);

    int day = totalSecond / 86400;
    int SecondsRemaining = totalSecond % 86400;

    int hour = SecondsRemaining / 3600;
    SecondsRemaining %= 3600;

    int minute = SecondsRemaining / 60;
    int second = SecondsRemaining % 60;

    if (day > 0) {
        printf("\nHasil : %d hari %02d:%02d:%02d\n\n", day, hour, minute, second);
    } else {
        printf("\nHasil : %02d:%02d:%02d\n\n", hour, minute, second);
    }

    return 0;
}