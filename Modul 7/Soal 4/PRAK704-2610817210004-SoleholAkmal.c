#include <stdio.h>
#include <string.h>

int main() {
    char description[500];
    int maxLength = 20;

    printf("\n");
    fgets(description, sizeof(description), stdin);
    description[strcspn(description, "\r\n")] = '\0';
    
    printf("\n");
    if (strlen(description) > maxLength) {
        description[maxLength] = '\0';
        printf("%s...\n", description);
    } else {
        printf("%s\n", description);
    }
    printf("\n");

    return 0;
}