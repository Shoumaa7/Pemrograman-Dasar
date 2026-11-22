#include <stdio.h>
#include <string.h>

int main() {
    char firstName[100];
    char lastName[100];
    char fullName[210];
    int nameLength = 0;
    int i; 

    printf("\n");
    printf("Nama Depan : ");
    fgets(firstName, sizeof(firstName), stdin);
    firstName[strcspn(firstName, "\r\n")] = '\0'; 

    printf("Nama Belakang : ");
    fgets(lastName, sizeof(lastName), stdin);
    lastName[strcspn(lastName, "\r\n")] = '\0'; 
    
    strcpy(fullName, firstName);
    strcat(fullName, " ");
    strcat(fullName, lastName); 

    for (i = 0; fullName[i] != '\0'; i++) {
        if (fullName[i] != ' ') {
            nameLength++;
        }
    } 
    
    printf("\n");
    printf("Nama Lengkap : %s\n", fullName);
    printf("Panjang Nama (tanpa spasi) : %d\n", nameLength);
    printf("\n"); 

    return 0;
}