#include <stdio.h>
#include <math.h>

int pedir_numero() {
	int a;
	printf("digite um numero: ");
	scanf("%d", &a);

	return a;
}

int eh_primo(int n){
	if (n < 2) {
		return 0;
	}
	
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

int main(void) {
	int a = pedir_numero();
	int primo = eh_primo(a);

	if (primo) {
		printf("O numero digitado é primo\n");
	} else {
		printf("O numero digitado não é primo\n");
	}

	return 0;
}

