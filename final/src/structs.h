enum tipoProduto {
    BEBIDA = 1,
    PRATO,
    SOBREMESA
};

struct Produto {
    int id;
    int tipo;
    char nome[50];
    float valor;
};

struct Cardapio {
    int totalBebidas;
    int totalPratos;
    int totalSobremesas;
    struct Produto bebidas[99];
    struct Produto pratos[99];
    struct Produto sobremesas[99];
};

struct Pedido {
    int id_produto;
    int quantidade;
    float valor_produto;
};

struct Mesa {
    int id;
    int livre;
    int totalPedidos;
    int pessoas;
    float conta;
    struct Pedido pedidos[99];
};

struct Restaurante {
    int isAberto;
    int totalMesasOcupadas;
    struct Cardapio cardapio;
    struct Mesa mesas[TOTAL_MESAS];
};

