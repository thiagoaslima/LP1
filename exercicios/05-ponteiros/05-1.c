#include <stdio.h>

int main(void) {
    int a, b;
    int* p;

    printf("Digite o valor de a: ");
    scanf("%d", &a);
    printf("Digite o valor de b: ");
    scanf("%d", &b);

    printf("Os valores de a e b são, respectivamente, %d e %d\n", a, b);

    if (a > b) {
        p = &a;
    } else {
        p = &b;
    }

    *p = *p - 50;

    printf("Os novos valores de a e b são, respectivamente, %d e %d\n", a, b);

    return 0;
}