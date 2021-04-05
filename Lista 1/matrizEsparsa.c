/*
Implemente uma função que receba como parâmetro de entrada uma matriz de números inteiros de tamanho qualquer e o seu tamanho.
A função a ser implementada deve retornar verdadeiro caso a matriz seja esparsa ou falso caso contrário,
considerando que uma matriz é esparsa se ela possuir mais do que 70% dos seus elementos iguais a 0.
A função main deve ler as dimensões da matriz,
cada um dos seus elementos e imprimir uma mensagem informando se a matriz é esparsa ou não,
de acordocom a resposta da função.
A matriz tem largura/altura máximas igual a 10.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int ehEsparsa(int altura, int largura, int matriz[][largura]) {    
    int i, j;
    double qtdZeros = 0;
    int numeroDeElementos = altura * largura;
    for(i = 0; i < altura; i++) {
        for (j = 0; j < largura; j++) {
            if(!matriz[i][j]) {
                qtdZeros++;
            }
        }        
    }
    return ((qtdZeros / numeroDeElementos) > 0.7);
}

int main(void) {
    setlocale(LC_ALL, "Portuguese");
    int i, j, altura, largura;
    scanf("%d%d", &altura, &largura);
    int matriz[altura][largura];

    for(i = 0; i < altura; i++) {
        for(j = 0; j < largura; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("A matriz %s esparsa\n", ehEsparsa(altura, largura, matriz) ? "é" : "não é");

    return 0;
}