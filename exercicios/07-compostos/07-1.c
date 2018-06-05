#include <stdio.h>

struct ItemCardapio {
    int id;
    char nome[50];
    float preco;
};

void preenche(struct ItemCardapio* item) {
    static int itens_counter = 0;
    char temp;
    (*item).id = ++itens_counter;

    printf("nome do prato: ");
    scanf("%[^\n]", (*item).nome);

    printf("valor do prato: ");
    scanf("%f", &(*item).preco);

    scanf("%c", &temp);
}

void imprimeItem(struct ItemCardapio* item) {
    printf("\n");
    
    printf("   id: %d\n",   (*item).id);
    printf(" nome: %s\n",   (*item).nome);
    printf("preço: %.2f\n", (*item).preco);   
}

int main(void) {
    struct ItemCardapio item1;
    struct ItemCardapio item2;

    preenche(&item1);
    preenche(&item2);

    imprimeItem(&item1);
    imprimeItem(&item2);

    return 0;
}
