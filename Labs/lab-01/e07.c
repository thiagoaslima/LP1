#include <stdio.h>
#include <string.h>

int qtdeTimes = 3;

int pts_vitoria = 3;
int pts_empate = 1;
int pts_derrota = 0;

char pNome[20];
int pPontos = 0;
int pVitorias = 0;
int pEmpates = 0;
int pDerrotas = 0;

char uNome[20];
int uPontos = 0;
int uVitorias = 0;
int uEmpates = 0;
int uDerrotas = 0;

int atualizarPrimeiro(char *nome, int pontos, int vitorias, int empates, int derrotas)
{
	strcpy(pNome, nome);
	pPontos = pontos;
	pVitorias = vitorias;
	pEmpates = empates;
	pDerrotas = derrotas;

	return 0;
}

int atualizarUltimo(char *nome, int pontos, int vitorias, int empates, int derrotas)
{
	strcpy(uNome, nome);
	uPontos = pontos;
	uVitorias = vitorias;
	uEmpates = empates;
	uDerrotas = derrotas;

	return 0;
}

int main(void)
{
	char nome[20];
	int vitorias;
	int empates;
	int derrotas;
	int totalPontos;
	int i;

	for (i = 0; i < qtdeTimes; i++)
	{
		printf("Digite o nome do time: ");
		scanf("%s", nome);
		printf("Digite o número de vitórias: ");
		scanf("%d", &vitorias);
		printf("Digite o número de empates: ");
		scanf("%d", &empates);
		printf("Digite o número de derrotas: ");
		scanf("%d", &derrotas);

		totalPontos = (vitorias * pts_vitoria) + (empates * pts_empate);

		if (i == 0)
		{
			atualizarPrimeiro(nome, totalPontos, vitorias, empates, derrotas);
			atualizarUltimo(nome, totalPontos, vitorias, empates, derrotas);
		}
		else
		{

			if (totalPontos > pPontos)
			{
				atualizarPrimeiro(nome, totalPontos, vitorias, empates, derrotas);
			}

			if (totalPontos == pPontos)
			{
				if (
					vitorias > pVitorias ||
					(vitorias == pVitorias && empates > pEmpates) ||
					(vitorias == pVitorias && empates == pEmpates && derrotas < pDerrotas))
				{
					atualizarPrimeiro(nome, totalPontos, vitorias, empates, derrotas);
				}
			}

			if (totalPontos < uPontos)
			{
				atualizarUltimo(nome, totalPontos, vitorias, empates, derrotas);
			}

			if (totalPontos == uPontos)
			{
				if (
					vitorias < pVitorias ||
					(vitorias == pVitorias && empates < pEmpates) ||
					(vitorias == pVitorias && empates == pEmpates && derrotas > pDerrotas))
				{
					atualizarUltimo(nome, totalPontos, vitorias, empates, derrotas);
				}
			}
		}
	}

	printf("O time vencedor é o %s, com %d pontos, e o último colocado é o %s, com %d pontos.\n", pNome, pPontos, uNome, uPontos);

	return 0;
}
