#include <stdio.h>
#include "constants.h"
#include "structs.h"
#include "log.h"
#include "functions.h"
#include "comandos.h"

int main(void)
{
    struct Cardapio cardapio = get_cardapio();
    struct Mesa mesas[TOTAL_MESAS];
    inicializa_mesas(&mesas);
    struct Restaurante restaurante = { 1, 0, cardapio, mesas[TOTAL_MESAS] };

    
    while (restaurante.isAberto)
    {
        int comando;
        printf("Digite o código da ação desejada: \n");
        printf("1 - abrir nova mesa\n");
        printf("2 - anotar pedido\n");
        printf("3 - fechar conta\n");
        printf("4 - fechar restaurante\n");
        printf("5 - administrar cardápio\n");

        scanf("%d", &comando);
        printf("\n");

        switch(comando) {
            case 1:
                comando_nova_mesa(&restaurante);
                break;
                
            case 4:
                comando_fecha_restaurante(&restaurante);
                break;
        }

    }

    return 0;
}