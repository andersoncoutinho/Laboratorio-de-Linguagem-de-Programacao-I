/*
Crie uma estrutura Data, com campos dia, mes e ano, e escreva um
programa que lê as datas de nascimento de duas pessoas e determina
quem é a mais velha.
Para isso, crie uma função que recebe duas datas, d1 e d2 , e retorna 1
se d1 é a data mais antiga, 0 se as duas datas são iguais, e −1 se d2 é a
data mais antiga.
*/

#include <stdio.h>

typedef struct {
    int dia;
    int mes;
    int ano;
} tData;

int maisVelho(tData d1, tData d2) {
    if(d1.ano == d2.ano && d1.mes == d2.mes && d1.dia == d2.dia) {
        return 0;
    } else if (d1.ano < d2.ano
                ||(d1.ano == d2.ano && d1.mes < d2.mes)
                ||(d1.ano == d2.ano && d1.mes == d2.mes && d1.dia < d2.dia)) {
        return 1;
    } else {
        return -1;
    }
}

int main(void) {
    tData d1, d2;

    scanf("%d%d%d", &d1.dia, &d1.mes, &d1.ano);
    scanf("%d%d%d", &d2.dia, &d2.mes, &d2.ano);

    switch(maisVelho(d1, d2)) {
        case -1:
            puts("Pessoa 2 é mais velha");
            break;
        case 0:
            puts("Pessoas são da mesma idade");
            break;
        case 1:
            puts("Pessoa 1 é mais velha");
            break;
    }

    return 0;
}
