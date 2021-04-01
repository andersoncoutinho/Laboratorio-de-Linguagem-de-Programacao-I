/* 
Defina um tipo estruturado para armazenar os dados de um jogador de futebol no decorrer de um partida.
Considere para tal os seguintes dados:
Nome Completo;
Idade;
Chutes a Gol;
Gols;
Escreve um programa no qual o usuário entra com os dados de dois jogares j1 e j2.
O programa deverá imprimir na tela o nome e idade do jogador com a melhor pontaria.
Isto é, qual converteu a maior parte dos chutes a gol.
*/

#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[50];
    int idade;
    int chutes;
    int gols;
}tJogador;

void tirarQuebra(char *nome) {
    nome[strlen(nome)-1] = '\0';
}

int main(void) {

    tJogador j1, j2, melhorPontaria;

    fgets(j1.nome, 50, stdin);
    tirarQuebra(j1.nome);
    scanf("%d%d%d%*c", &j1.idade, &j1.chutes, &j1.gols);

    fgets(j2.nome, 50, stdin);
    tirarQuebra(j2.nome);
    scanf("%d%d%d", &j2.idade, &j2.chutes, &j2.gols);

    melhorPontaria = (double) j1.gols/j1.chutes > (double) j2.gols/j2.chutes ? j1 : j2;

    printf("%s (%d)\n", melhorPontaria.nome, melhorPontaria.idade);

    return 0;
}
