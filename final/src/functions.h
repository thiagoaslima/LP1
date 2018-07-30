struct Cardapio get_cardapio()
{

    struct Produto bebidas[TOTAL_BEBIDAS] = {
        {1, BEBIDA, "água sem gás", 2.00},
        {2, BEBIDA, "água com gás", 3.00},
        {3, BEBIDA, "refrigerante", 5.00},
        {4, BEBIDA, "cerveja", 7.00},
        {5, BEBIDA, "vinho", 9.00},
    };

    struct Produto pratos[TOTAL_PRATOS] = {
        {6, PRATO, "Alcatra com arroz e fritas", 25.00},
        {7, PRATO, "Camarão com catupiry, arroz e fritas", 32.00},
        {8, PRATO, "Carne assada com arroz e batatas", 26.00},
        {9, PRATO, "Filé mignon com arroz e fritas", 28.50},
        {10, PRATO, "Frango com catupiry, arroz e fritas", 21.00},
        {11, PRATO, "Filé de frango com salada", 21.00},
        {12, PRATO, "Gnocchi com carne assada", 23.00},
        {13, PRATO, "Pernil com tutu, arroz e couve", 21.00},
        {14, PRATO, "Strogonoff de carne", 21.00},
    };

    struct Produto sobremesas[TOTAL_SOBREMESAS] = {
        {15, SOBREMESA, "Petit Gateau", 13.00},
        {16, SOBREMESA, "Tiramisu", 23.00},
        {17, SOBREMESA, "Pudim de leite", 11.00},
        {18, SOBREMESA, "Torta de chocolate (fatia)", 11.50},
        {19, SOBREMESA, "Salada de frutas", 14.50}};

    struct Cardapio cardapio = {
        TOTAL_BEBIDAS,
        TOTAL_PRATOS,
        TOTAL_SOBREMESAS,
        bebidas[TOTAL_BEBIDAS],
        pratos[TOTAL_PRATOS],
        sobremesas[TOTAL_SOBREMESAS]};

    return cardapio;
}

struct Mesa nova_mesa(int id, int pessoas)
{
    struct Mesa mesa;
    mesa.id = id;
    mesa.totalPedidos = 0;
    mesa.pessoas = pessoas;
    mesa.conta = 0;

    return mesa;
}

void inicializa_mesas(struct Mesa* mesas[TOTAL_MESAS])
{
    int i;
    printf("Aqui\n");
    for (i = 0; i < TOTAL_MESAS; i++)
    {
        (*mesas[i]) = nova_mesa(i+1, 0);
    }
}

void ocupa_mesa(int pessoas, struct Mesa *mesa, struct Restaurante *restaurante) {
    mesa->livre = 0;
    mesa->pessoas = pessoas;
    restaurante->totalMesasOcupadas++;
}

void imprimir_conta(struct Mesa mesa)
{
    printf("total da conta: %f", mesa.conta);
}

void esvaziar_mesa(struct Mesa *mesa, struct Restaurante *restaurante)
{
    mesa->livre = 1;
    mesa->pessoas = 0;
    restaurante->totalMesasOcupadas--;
}
