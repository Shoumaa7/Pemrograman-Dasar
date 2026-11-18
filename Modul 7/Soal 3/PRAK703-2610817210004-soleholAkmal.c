#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char sentence[200];
    int vowelCount = 0;
    int consonantCount = 0;
    int i;
    char character; 

    printf("\n");
    printf("Kalimat : ");
    fgets(sentence, sizeof(sentence), stdin);
    sentence[strcspn(sentence, "\r\n")] = '\0'; 
    
    for (i = 0; sentence[i] != '\0'; i++) {
        character = tolower(sentence[i]); 
        if (isalpha(character)) {
            if (strchr("aiueo", character)) {
                vowelCount++; 
            } else {
                consonantCount++;
            }
        }
    } 
    
    printf("\n");
    printf("Jumlah Vokal : %d\n", vowelCount);
    printf("Jumlah Konsonan : %d\n", consonantCount);
    printf("\n"); 

    return 0;
}