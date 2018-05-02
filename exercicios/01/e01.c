#include <stdio.h>

int main () {
	int n1;
    int n2;
    int maior;
    int menor;
    int aux;

	printf("digite o primeiro número: ");
	scanf("%d", &n1);

	printf("digite o segundo número: ");
	scanf("%d", &n2);

    if (n1 > n2) {
        maior = n1;
        menor = n2;
    } else {
        menor = n1;
        maior = n2;
    }

	if (maior == menor){
        printf("Você escolheu o número %d 2 vezes", menor);
	} else {
        printf("Você escolheu os números %d e %d.\n", menor, maior);

        aux = menor + 1;
        if (aux + 1 == maior) {
            printf("Entre eles existe o número %d", aux);
        } else if (aux < maior) {

            printf("Entre eles existem os números: %d", aux);

            aux += 1;
            while(aux < maior) {
                printf(", %d", aux);
                aux += 1;
            }

            printf(".");
        }
    }

	return 0;
}
