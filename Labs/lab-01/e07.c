#include <stdio.h>

int main(void) {
	int times = 20;
	char primeiro[];
	int primeiro_pontos;
	char ultimo[];
	int ultimo_pontos;
	
	int pts_vitoria = 3;
	int pts_empate = 1;
	int pts_derrota = 0;
	

	char nome[];
	int vitorias;
	int empates;
	int total_pontos;
	int i = 0;

	for (i; i < times; i++) {
		printf("Digite o nome do time: ");
		scanf("%c", &nome);
		printf("Digite o número de vitórias: ");
		scanf("%d", &vitorias);
		printf("Digite o número de empates: ");
		scanf("%d", &empates);
		printf("Digite o número de derrotas: ");

		total_pontos = vitorias * pts_vitoria + empates * pts_empate;

		if (total_pontos > primeiro_pontos) {
			primeiro = nome;
			primeiro_pontos = total_pontos;
		}

		if (total_pontos < ultimo_pontos) {
			ultimo = nome;
			ultimo_pontos = total_pontos;
		}
	}

	printf("O time vencedor é o %c e o último colocado é o %c", primeiro, ultimo)
	
	return 0;
}
