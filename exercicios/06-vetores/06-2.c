#include <stdio.h>

float media(int l, int c, int arr[][c])
{
    float soma = 0.;
    int itens = l * c;
    float media;

    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {
            soma += arr[i][j];
        }
    }

    media = soma / itens;
    return media;
}

void preenche(int l, int c, int arr[][c])
{
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Digite o item [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
}

int main(void)
{
    int l;
    int c;
    float valorMedia;

    printf("Numero de linhas: ");
    scanf(" %d", &l);

    printf("Numero de colunas: ");
    scanf(" %d", &c);

    int arr[l][c];

    preenche(l, c, arr);
    printf("");
    valorMedia = media(l, c, arr);

    printf("A média é: %f.\n", valorMedia);

    return 0;
}