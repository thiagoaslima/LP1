/*
Faça um programa que leia números continuamente até que seja digitado 0. Ao final, o programa deve exibir a soma de todos os números lidos.
*/

#include <stdio.h>

int main(void) {
	int sum = 0;
	int n;

	do {
		printf("Digite um número: ");
		scanf("%d", &n);
		sum = sum + n;
	} while (n != 0);

	printf("A soma é de %d.\n", sum);

	return 0;
}
