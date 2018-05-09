#include <stdio.h>

int main(void)
{
    int n = 50;
    char temps[n];
    int temp;
    float media;
    int soma = 0, ocorrencias = 0;
    int i = 0;

    while (i < n)
    {
        printf("Digite uma temperatura: ");
        scanf("%d", &temp);
        temps[i] = temp;
        soma += temp;
        i++;
    }

    media = (float)soma / n;

    for (i = 0; i < n; i++)
    {
        if (temps[i] > media)
        {
            ocorrencias++;
        }
    }

    printf("Há %d temperaturas acima da média %f.\n", ocorrencias, media);

    return 0;
}
