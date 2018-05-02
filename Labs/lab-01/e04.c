/*
Agora o aluno alugou um carro. Ele está preocupado com o limite de velocidade, mas não entende muito bem o sistema de milhas por hora (mph). Ele pretende manter sempre uma velocidade entre 80 e 100 quilômetros por hora (kph). Sabe-se que que 1 milha tem aproximadamente 1.6 quilômetros. Crie um programa que leia a velocidade atual do carro em mph e escreva na tela ACELERE, DESACELERE ou MANTENHA.
*/

#include <stdio.h>

int main(void) {

	int limiteMenor = 80;
	int limiteMaior = 100;
	float conversao = 1.6;
	int velocidade;

	printf("Digite a velocidade do carro em mph: ");
	scanf("%d", &velocidade);
	
	if (velocidade * conversao < limiteMenor) {
		printf("ACELERE\n");			
    } else if (velocidade * conversao > limiteMaior) {
		printf("DESACELERE\n");	
	} else {
		printf("MANTENHA\n");
	}

	return 0;
}
