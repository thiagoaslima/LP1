#include <stdio.h>

void compra(int* conta, int valor) {
    *conta = *conta - valor;
}

int main(void) {
    int conta1, conta2;

    printf("Saldo da conta 1: ");
    scanf("%d", &conta1);

    printf("Saldo da conta 2: ");
    scanf("%d", &conta2);

    if (conta1 > conta2) {
        compra(&conta1, 500);
    } else {
        compra(&conta2, 500);
    }

    printf("Os saldos das contas 1 e 2 são, respectivamente, %d e %d.\n", conta1, conta2);

    return 0;
}