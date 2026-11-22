#include <stdio.h>

struct Dompet {
    char name[100];
    int balance;
};

void topup(struct Dompet *d, int amount);
void pay(struct Dompet *d, int amount);

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
            topup(&user, amounts[i]);
            printf("\nTop up %d berhasil, saldo = %d", amounts[i], user.balance);
        } else if (actions[i] == 'B') {
            pay(&user, amounts[i]);
        } else {
            printf("\nHanya T dan B diperbolehkan");
        }
    }

    printf("\nSaldo akhir %s = %d\n\n", user.name, user.balance);

    return 0;
}

void topup(struct Dompet *d, int amount) {
    d->balance += amount;
}

void pay(struct Dompet *d, int amount) {
    if (d->balance >= amount) {
        d->balance -= amount;
        printf("\nBayar %d berhasil, saldo = %d", amount, d->balance);
    } else {
        printf("\nBayar %d gagal, saldo tidak cukup", amount);
    }
}