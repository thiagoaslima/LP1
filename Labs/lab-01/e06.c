#include <stdio.h>

int main(void) {
	int sum = 0;
	int n;
	int i = 1;

	printf("Digite um número: ");
	scanf("%d", &n);

	for (i; i <= n; i++){
		sum += i*i;
	}

	printf("O somatório vale %d\n", sum);

	return 0;
}
