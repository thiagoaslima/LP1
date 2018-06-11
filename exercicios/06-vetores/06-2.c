#include <stdio.h>

float media(int *arr, int l, int c) {
    int soma = 0;
    int itens = l * c;
    float media;
    
    for (int i = 0; i < l; i++) {
        for (int j = 0; j < c; j++) {
            soma += arr[i][j];
        }
    }

    media = soma/itens;
    return media;
}

void preenche(int *arr, int l, int c) {
    int itens = l * c;

    for (int i = 0; i < l; i++) {
        for (int j = 0; j < c; j++) {
            printf("Digite o item [%d][%d]: ", i, j);
            scanf("%d", arr[i][j]);
        }
    }
}

int main(void) {
    int arr[][];
    int l, int c;
    int valorMedia;

    printf("Numero de linhas: ");
    scanf("%d", &l);

    printf("Numero de colunas: ");
    scanf("%d", &c);

    preenche(arr, l, c);
    valorMedia = media(arr, l, c);

    print("A média é: %f.\n", valorMedia);
    
    return 0;
}