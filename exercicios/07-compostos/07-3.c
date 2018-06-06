#include <stdio.h>

struct Posicao {
	int x;
	int y;
};

struct Personagem {
	char simbolo;
	int pontos;
	struct Posicao posicao;
};

void constroiPosicao(struct Posicao* p) {
	printf("x: ");
	scanf("%d", &(*p).x);

	printf("y: ");
	scanf("%d", &(*p).y);
}

void constroiPersonagem(struct Personagem* p) {
	printf("Nome do personagem: ");
	scanf("%c", &(*p).simbolo);

	(*p).pontos = 0;

	printf("Posição do personagem: ");
	constroiPosicao(&(*p).posicao);
}

void constroiPersonagens(struct Personagem* personagens, int qtde) {
	int i = 0;

	while (i < qtde) {
		printf("Entre com os dados do personagem (%d de %d)", i+1, qtde);
		constroiPersonagem(&personagens[i]);
		i++;
	}	
}

char getPersonagem(struct Personagem* personagens, int tamArray, int x, int y) {
	int i = 0; 

	while (i < tamArray) {
		struct Personagem p = personagens[i];
		if (p.posicao.x == x && p.posicao.y == y) {
			return p.simbolo;
		}
		i++;
	}

	return 0;
}

void imprimePersonagens(struct Personagem* personagens, int qtde) {
	int linha = 0, coluna = 0;	

	printf("  0 1 2 3 4 5 6 7 8 9 \n");

	for (;linha < 10; linha++) {
		
		printf("%d ", linha);

		for (; coluna < 10; coluna++) {
			char c = getPersonagem(personagens, 9, linha, coluna);
			if (c)
				printf("%c ", c);
			else
				printf("  ");
		}

		printf("\n");
	}

	printf("\n");

}

int main(void) {
	int n = 1;
	struct Personagem personagens[n];
	
	constroiPersonagens(personagens, n);
	imprimePersonagens(personagens, n);	

	return 0;
}
