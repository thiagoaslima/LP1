#include <stdio.h>
#include <math.h>

int pedir_numero() {
	int a;
	printf("digite um numero: ");
	scanf("%d", &a);

	return a;
}

int eh_primo(int n){
	
	double raiz = sqrt(n);
	
	if (fmod(n, raiz) == 0) {
		return 0;
	}

	int div = floor(raiz); 
	while(div > 1) {
		if (n % div == 0) {
			return 0;
        } else {
			div--;
		}
	}

	return 1;
}

int todos_os_primos(int max) {
	if (max < 2) {
		printf("Nenhum número primo.\n");
    } else {
		int n = 2;

		printf("%d", n);
		n++;

		while(n <= max) {
			if (eh_primo(n)) {
				printf(", %d", n);
			}
			n++;
		}
		printf("\n");
	}

	return 0;
}

int main(void) {

	int n = pedir_numero();
	todos_os_primos(n);

	return 0;
}
