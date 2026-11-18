#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char word[100];
    char loweredWord[100];
    int length;
    int i;
    int isPalindrome = 1; 

    printf("\n");
    scanf("%99s", word); 
    
    length = strlen(word);
    for (i = 0; i < length; i++) {
        loweredWord[i] = tolower(word[i]);
    } 

    loweredWord[length] = '\0';
    for (i = 0; i < length / 2; i++) {
        if (loweredWord[i] != loweredWord[length - 1 - i]) {
            isPalindrome = 0;
            break;
        }
    } 
    
    printf("\n");
    if (isPalindrome) {
        printf("Kata '%s' adalah palindrom\n", word);
    } else {
        printf("Kata '%s' bukan palindrom\n", word);
    }
    printf("\n"); 
    return 0;
}