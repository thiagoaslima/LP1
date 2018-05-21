#include <stdio.h>

void compra(int* conta, int valor) {
    *conta = *conta - valor;
}

int* getMaiorConta(int* conta1, int* conta2) {
    if (*conta1 >= *conta2) {
        return conta1;
    } else {
        return conta2;
    }
}

void defineSaldo(int* conta) {
    printf("Digite o saldo da conta: ");
    scanf("%d", conta);
}

int main(void) {
    int conta1, conta2;
    int compras[] = {100, 50, 80, 30, 20};

    defineSaldo(&conta1);
    defineSaldo(&conta2);

    for(int i = 0; i < 5; i++) {
        compra(getMaiorConta(&conta1, &conta2), compras[i]);
        printf("Os saldos das contas 1 e 2 são, respectivamente, %d e %d.\n", conta1, conta2);
    }  

    return 0;
}
