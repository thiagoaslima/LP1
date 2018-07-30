void print_separador_antes() {
    printf("\n\n----\n");
}
void print_separador_depois() {
    printf("\n----\n\n");
}

void print_tipo(int tipo) {
    switch(tipo) {
        case BEBIDA:
            printf("Bebida\n");
            break;

        case PRATO:
            printf("Prato\n");
            break; 

        case SOBREMESA:
            printf("Sobremesa\n");
            break;
    }
}

void print_produto(struct Produto p) {
    print_separador_antes();
    printf("Produto %d\n", p.id);
    printf("%s\n", p.nome);
    print_tipo(p.tipo);
    printf("%.2f\n", p.valor);
    print_separador_depois();
}

void print_pedido(struct Pedido p) {
    print_separador_antes();
    printf("Produto %d\n", p.id_produto);
    printf("%dx %.2f\n", p.quantidade, p.valor_produto);
    printf("subtotal: %.2f\n", p.quantidade * p.valor_produto);
    print_separador_depois();
}

void print_mesa(struct Mesa m) {
    print_separador_antes();
    printf("Mesa %d:\n", m.id);
    printf("livre? %s\n", m.livre ? "sim" : "não");
    printf("%d pessoas\n", m.pessoas);
    printf("%d pedidos cadastrados\n", m.totalPedidos);

    int i = 0;
    for(; i < m.totalPedidos; i++) {
        print_pedido(m.pedidos[i]);
    }
    
    printf("total: %.2f\n", m.conta);
    print_separador_depois();
}