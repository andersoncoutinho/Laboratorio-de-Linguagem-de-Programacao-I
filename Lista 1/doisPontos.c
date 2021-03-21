/*
Escreva um programa para calcular a distância entre dois pontos no plano catersiano.
O seu programa deve ter uma estrutura Ponto, com campos x e y,
e uma função que recebe dois pontos e retorna o quadrado da distância entre eles.
*/
#include <stdio.h>

typedef struct {
    int x;
    int y;
} tPonto;

int distancia(tPonto p1, tPonto p2) {

    int x = p1.x - p2.x;
    int y = p1.y - p2.y;

    return (x*x) + (y*y);
}

int main(void) {
    tPonto p1, p2;

    scanf("%d%d", &p1.x, &p1.y);
    scanf("%d%d", &p2.x, &p2.y);

    printf("%d\n", distancia(p1, p2));

    return 0;
}