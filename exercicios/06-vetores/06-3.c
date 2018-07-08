#include <stdio.h>

const int DIM = 10;

struct Ponto {
    int x;
    int y;
};

struct Ponto preenche(int x, int y) {
    struct Ponto p = {x, y};
    return p;
}

void preenche_vetor(struct Ponto ps[DIM]) {
    int x, y, i;

    for (i = 0; i < DIM; i++) {
        printf("Escreva os valores de x e y do ponto: ");
        scanf("%d%d", &x, &y);
        ps[i] = preenche(x, y);
    }
}

struct Ponto min(struct Ponto ps[DIM]) {
    int i, d = -1;
    struct Ponto p;

    for (i = 0; i < DIM; i++) {
        struct Ponto p1 = ps[i];
        int d1 = (p1.x * p1.x) + (p1.y * p1.y);

        if (d1 > d) {
            d = d1;
            p = p1;
        }
    }

    return p;
}

int main() {
    struct Ponto ps[DIM];
    struct Ponto p;
    preenche_vetor(ps);

    p = min(ps);
    printf("O ponto mais distante da origem é P(%d %d).\n", p.x, p.y);

    return 0;
}