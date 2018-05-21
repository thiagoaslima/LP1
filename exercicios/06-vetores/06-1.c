#include <stdio.h>

void preenche(int* vec, int n) {
    for (int i = 0; i < n; i++) {
        printf("Digite um número: ");
        scanf("%d", vec+i);
    }
}

float media(int* vec, int n) {
    int soma = 0;
    
    for (int i = 0; i < n; i++) {
        soma += *(vec+i);
    }

    return (float)soma/n;
}

int main(void) {
    int n;

    printf("Digite o tamanho desejado do vetor: ");
    scanf("%d", &n);

    int vec[n];
    float m;

    preenche(vec, n);
    m = media(vec, n);

    printf("A média dos números %d", *(vec+0));
    for(int i = 1; i < n; i++) {
        printf(", %d", *(vec+i));
    }
    printf(" é %f.\n", m);

    return 0;
}
