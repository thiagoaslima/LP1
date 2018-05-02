/*
 Um aluno de LP1 está indo aos Estados Unidos 
 e quer comprar um celular novo. 
 Ele não quer gastar mais do que 1000 reais. 
 Um dólar está custando 3.17 reais. 
 Faça um programa que leia o preço de um celular em dólares 
 e, caso seja um bom negócio, escreva BOM NEGÓCIO.
*/

#include <stdio.h> 

int main(void) {
	int limite = 1000;
	float cotacao = 3.17;
	float preco;

	printf("Digite o valor do celular em dólares: ");
	scanf("%f", &preco);

	if (preco * cotacao <= limite) {
      printf("BOM NEGÓCIO\n");
    }

	return 0;
}
