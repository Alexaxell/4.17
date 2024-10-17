#include <stdio.h>

int main(void) {
    int i;
    int n;
    int num;
    int somma = 0;
    printf("inserire il numero di numeri da inserire:\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        printf("inserisci il %d numero:\n", i);
        scanf("%d", &num);
        somma += num;
    }
    printf("la somma dei valori assoluti è %d", somma);
    return 0;
}
