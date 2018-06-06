#include <stdio.h>
#include <string.h>

enum tipoItemCardapio
{
    bebida = 1,
    prato = 2,
    sobremesa = 3
};

struct ItemCardapio
{
    int id;
    char nome[30];
    float preco;
};

struct Cardapio
{
    int qtdePratos;
    int qtdeBebidas;
    int qtdeSobremesas;
    int maxNome;
    struct ItemCardapio pratos[20];
    struct ItemCardapio bebidas[10];
    struct ItemCardapio sobremesas[5];
};

void preenche(struct ItemCardapio *item)
{
    static int id = 0;
    char temp;

    (*item).id = ++id;

    scanf("%c", &temp);

    printf("nome: ");
    scanf("%[^\n]", (*item).nome);

    printf("valor: ");
    scanf("%f", &(*item).preco);
}

void preenche2(struct Cardapio *cardapio)
{
    int keep_going = 1;
    int tipo;
    int i;

    struct ItemCardapio item;

    (*cardapio).qtdePratos = 0;
    (*cardapio).qtdeBebidas = 0;
    (*cardapio).qtdeSobremesas = 0;

    printf("Cadastre um item no cardápio: \n");

    while (keep_going)
    {

        printf("Tipo (1 = bebida, 2 = prato principal, 3 = sobremesa): ");
        scanf("%d", &tipo);

        switch (tipo)
        {
        case bebida:
            preenche(&(*cardapio).bebidas[(*cardapio).qtdeBebidas]);
            item = (*cardapio).bebidas[(*cardapio).qtdeBebidas];
            (*cardapio).qtdeBebidas += 1;
            break;

        case prato:
            preenche(&(*cardapio).pratos[(*cardapio).qtdePratos]);
            item = (*cardapio).pratos[(*cardapio).qtdePratos];
            (*cardapio).qtdePratos++;
            break;

        case sobremesa:
            preenche(&(*cardapio).sobremesas[(*cardapio).qtdeSobremesas]);
            item = (*cardapio).sobremesas[(*cardapio).qtdeSobremesas];
            (*cardapio).qtdeSobremesas++;
            break;
        }

        if (strlen((item).nome) > (*cardapio).maxNome)
        {
            (*cardapio).maxNome = strlen((item).nome);
        }

        printf("Deseja cadastrar um novo item no cardápio (0 = não, 1 = sim)? ");
        scanf("%d", &keep_going);
    }
}

void imprimirCardapio(struct Cardapio cardapio)
{
    if (cardapio.qtdePratos > 0)
    {
        printf("%s", "\n*** PRATOS ***\n");

        for (int i = 0; i < cardapio.qtdePratos; i++)
        {
            printf("%*s", cardapio.maxNome, cardapio.pratos[i].nome);
            printf(" : R$ %3.2f\n", cardapio.pratos[i].preco);
        }
    }

    if (cardapio.qtdePratos > 0)
    {
        printf("%s", "\n*** BEBIDAS *** \n");

        for (int i = 0; i < cardapio.qtdeBebidas; i++)
        {
            printf("%*s", cardapio.maxNome, cardapio.bebidas[i].nome);
            printf(" : R$ %3.2f\n", cardapio.bebidas[i].preco);
        }
    }

    if (cardapio.qtdePratos > 0)
    {
        printf("%s", "\n*** SOBREMESAS *** \n");

        for (int i = 0; i < cardapio.qtdeSobremesas; i++)
        {
            printf("%*s", cardapio.maxNome, cardapio.sobremesas[i].nome);
            printf(" : R$ %3.2f\n", cardapio.sobremesas[i].preco);
        }
    }
}

int main(void)
{
    struct Cardapio cardapio;

    preenche2(&cardapio);
    imprimirCardapio(cardapio);

    return 0;
}