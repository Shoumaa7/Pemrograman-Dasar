#include <stdio.h>
#include <string.h>

int main() {
    printf("\n");

    char secretCode[1000];
    char message[1000]; 

    fgets(secretCode, sizeof(secretCode), stdin);
    fgets(message, sizeof(message), stdin);
    secretCode[strcspn(secretCode, "\r\n")] = '\0';
    message[strcspn(message, "\r\n")] = '\0'; 

    int codeLength = strlen(secretCode);
    int messageLength = strlen(message); 

    printf("\n");

    if (codeLength != messageLength) {
        printf("Panjang kalimat berbeda, pesan palsu\n");
        printf("\n");
        return 0;
    } 

    char result[1000];
    int starCount = 0;
    int hashCount = 0; 

    for (int i = 0; i < codeLength; i++) {
        if (secretCode[i] == message[i]) {
            if (secretCode[i] == ' ') { 
                result[i] = ' '; 
            } else {
                result[i] = '*';
                starCount++;
            }
        } else {
            result[i] = '#';
            hashCount++; 
        }
    }
    result[codeLength] = '\0'; 

    printf("%s\n", result);
    printf("* = %d\n", starCount);
    printf("# = %d\n", hashCount); 

    if (starCount >= hashCount) {
        printf("Pesan Asli\n");
    } else {
        printf("Pesan Palsu\n");
    } 

    printf("\n");

    return 0;
}