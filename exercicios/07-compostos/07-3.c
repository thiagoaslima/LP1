#include <stdio.h>

struct Posicao
{
	int x;
	int y;
};

struct Personagem
{
	char simbolo;
	int pontos;
	struct Posicao posicao;
};

void constroiPosicao(struct Posicao *p)
{
	printf("linha: ");
	scanf("%d", &(*p).x);

	printf("coluna: ");
	scanf("%d", &(*p).y);
}

void constroiPersonagem(struct Personagem *p)
{
	char temp;
	(*p).pontos = 0;

    printf("Símbolo do personagem: ");
    scanf("%[^\n]", &(*p).simbolo);

    printf("Posição do personagem: \n");
	constroiPosicao(&(*p).posicao);

	scanf("%c", &temp);
}

void constroiPersonagens(struct Personagem *personagens, int qtde)
{
	int i = 0;

	while (i < qtde)
	{
		printf("\nEntre com os dados do personagem (%d de %d)\n", i + 1, qtde);
		constroiPersonagem(&personagens[i]);
		i++;
	}
}

char getPersonagem(struct Personagem *personagens, int tamArray, int x, int y)
{
	int i = 0;

	while (i < tamArray)
	{
		struct Personagem p = personagens[i];
		if (p.posicao.x == x && p.posicao.y == y)
		{
			return p.simbolo;
		}
		i++;
	}

	return 0;
}

void imprimeMapaJogo(struct Personagem *personagens, int qtde)
{
	char matriz[10][10] = {0};

	for (int i = 0; i < qtde; i++)
	{
		struct Personagem p = personagens[i];
		matriz[p.posicao.x][p.posicao.y] = p.simbolo;
	}

	int linha = 0, coluna = 0;

	printf("  0 1 2 3 4 5 6 7 8 9 \n");

	for (; linha < 10; linha++)
	{
		coluna = 0; 
		printf("%d ", linha);

		for (; coluna < 10; coluna++)
		{
			if (matriz[linha][coluna])
				printf("%c ", matriz[linha][coluna]);
			else
				printf("  ");
		}

		printf("\n");
	}

	printf("\n");
}

int main(void)
{
	int n = 10;
	struct Personagem personagens[10];

	constroiPersonagens(personagens, n);
	imprimeMapaJogo(personagens, n);

	return 0;
}
