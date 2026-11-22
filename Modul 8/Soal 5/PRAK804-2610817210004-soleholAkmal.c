#include <stdio.h>

void topup (int *balance, int *amount);
void pay (int *balance, int *amount); 

struct Dompet {
    char name[100];
    int balance;
}; 

int main() {
    int n;
    struct Dompet user; 

    printf("\n");
    scanf("%s %d", user.name, &user.balance);
    scanf("%d", &n); 

    char actions[n];
    int amounts[n]; 

    for (int i = 0; i < n; i++) {
        scanf(" %c %d", &actions[i], &amounts[i]);
    } 

    for (int i = 0; i < n; i++) {
        if (actions[i] == 'T') {
            topup(&user.balance, &amounts[i]);
            printf("\nTop up %d berhasil, saldo = %d", amounts[i], user.balance); 
        } else if (actions[i] == 'B') {
            if (user.balance >= amounts[i]) {
                pay(&user.balance, &amounts[i]);
                printf("\nBayar %d berhasil, saldo = %d", amounts[i], user.balance); 
            } else {
                printf("\nBayar %d gagal, saldo tidak cukup", amounts[i]); 
            }
        } else {
            printf("\nHanya T dan B diperbolehkan");
        }
    } 

    printf("\nSaldo akhir %s = %d\n\n", user.name, user.balance); 
    return 0;
}

void topup (int *balance, int *amount) {
    *balance += *amount;
} 

void pay (int *balance, int *amount) {
    *balance -= *amount;
} 