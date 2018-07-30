void comando_nova_mesa(struct Restaurante *restaurante)
{
    int qtdePessoas;
    int i = 0;

    if (restaurante->totalMesasOcupadas < TOTAL_MESAS)
    {
        printf("Digite o número de pessoas à mesa:\n");
        scanf("%d", &qtdePessoas);

        while(!restaurante->mesas[i].livre) {
            i++;
        }

        ocupa_mesa(qtdePessoas, &restaurante->mesas[i], restaurante);
        restaurante->totalMesasOcupadas++;
        struct Mesa mesa = restaurante->mesas[i];

        print_mesa(mesa);

        if (qtdePessoas > 1) {
            printf("As %d pessoas se sentaram à mesa %d", qtdePessoas, mesa.id);
        } else {
            printf("O cliente se sentou à mesa %d", mesa.id);
        }
    }
    else
    {
        printf("Infelizmente não há mesas disponíveis.");
    }
}

void comando_fechar_conta(struct Restaurante *restaurante) 
{
    if (restaurante->totalMesasOcupadas > 0) {
        int idx = 0;

        if (restaurante->totalMesasOcupadas > 1) {
            printf("Digite qual mesa deseja a conta (1-%d)", restaurante->totalMesasOcupadas);
            scanf("%d", &idx);
            idx--;
        } else {
            while (restaurante->mesas[idx].livre) {
                idx++;
            }
        }

        struct Mesa mesa = restaurante->mesas[idx];

        imprimir_conta(restaurante->mesas[idx]);
        esvaziar_mesa(&restaurante->mesas[idx], restaurante);
    }

}

void comando_fecha_restaurante(struct Restaurante *restaurante)
{
    restaurante->isAberto = 0;
    printf("Obrigado e volte sempre.");
}
