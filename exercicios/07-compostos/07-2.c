#include <stdio.h>

int itens_counter = 0;
struct ItemCardapio {
    int id;
    char nome[50];
    float preco;
};

struct Mesa {
    int qtdePedidos;
    struct ItemCardapio* pedidos[100];
    float totalConta;
};

void preenche(struct ItemCardapio* item) {
    char temp;
    (*item).id = ++itens_counter;

    printf("nome do prato: ");
    scanf("%[^\n]", (*item).nome);

    printf("valor do prato: ");
    scanf("%f", &(*item).preco);

    scanf("%c", &temp);
}

void preenche2(struct Mesa* mesa, struct ItemCardapio* pedido) {
    (*mesa).pedidos[(*mesa).qtdePedidos] = pedido;
    (*mesa).qtdePedidos+=1;
    (*mesa).totalConta += (*pedido).preco;
}

int main(void) {
    struct ItemCardapio item1;
    struct ItemCardapio item2;

    preenche(&item1);
    preenche(&item2);

    struct Mesa mesa;
    mesa.qtdePedidos = 0;
    mesa.totalConta = 0;

    preenche2(&mesa, &item1);
    preenche2(&mesa, &item2);

    printf("\nA mesa fez %d pedidos, totalizando R$ %.2f\n", mesa.qtdePedidos, mesa.totalConta);
    printf("Os pedidos foram:\n");

    for (int i = 0; i < mesa.qtdePedidos; i++) {
        printf("\t%s\n", (*mesa.pedidos[i]).nome);
    }

    return 0;
}