#include <stdio.h>

int main (void) {
    int n1;
    int n2;

    printf("Digite o primeiro número: ");
    scanf("%d", &n1);
    printf("Digite o segundo número: ");
    scanf("%d", &n2);

    if (n1>n2) {
      printf("O maior número foi o primeiro digitado: %d.\n", n1);
    } 

    if (n1<n2) {
      printf("O maior número foi o segundo digitado: %d.\n", n2);
    }

    if (n1 == n2) {
      printf("Os dois números são iguais: %d.\n", n2);
    }

    return 0;
}
