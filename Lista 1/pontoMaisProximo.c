/*
Escreva um programa que lê as coordenadas no plano cartesiano de um ponto
p e em seguida lê um inteiro n e as coordenadas de n pontos. Seu programa deve
dizer qual dos n pontos é o ponto mais próximo de p. O seu programa deve ter
uma estrutura Ponto, com campos x e y, e uma função que recebe dois pontos e
retorna a distância entre eles.
*/

#include <stdio.h>
#include <math.h>
#include <limits.h>

typedef struct {
    int x;
    int y;
} tPonto;

int distancia(tPonto p1, tPonto p2) {

    int x = fabs(p1.x - p2.x);
    int y = fabs(p1.y - p2.y);

    x = pow(x, 2);
    y = pow(y, 2);

    return (int) sqrt(x+y);
}

int main(void) {

    tPonto p1, pontoMaisProximo;
    int n, i, d, menor = INT_MAX;

    scanf("%d%d", &p1.x, &p1.y);

    scanf("%d", &n);

    tPonto ponto;

    for(i = 0; i < n; i++) {

        scanf("%d%d", &ponto.x, &ponto.y);

        d = distancia(p1, ponto);

        if(d < menor) {
            menor = d;
            pontoMaisProximo = ponto;
        }
    }

    printf("Ponto mais perto é (%d, %d)\n", pontoMaisProximo.x, pontoMaisProximo.y);

    return 0;
}
