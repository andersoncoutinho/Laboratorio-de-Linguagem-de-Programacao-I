/* Considere a estrutura a seguir:

    struct Movel{
        char descricao[50];
        float peso;
        char tipo;
    };

    A partir desta estrutura, escreva um programa no qual o usuário cadastra n móveis,
    imprimindo ao final do cadastro um relatório informando:
    Quantos móveis acima de 10Kg são do tipo 's';
    Quantos móveis tem a descrição terminando em "Real";
    Qual a descrição do móvel mais pesado; */

#include <stdio.h>
#include <string.h>

typedef struct {
    char descricao[50];
    float peso;
    char tipo;
} tMovel;

int main(void) {
    
    int n, i, maisDeDezKilos = 0, terminaEmReal = 0, maiorPeso = 0;
    char maisPesado[50];

    scanf("%d%*c", &n);

    tMovel movel[n];

    for(i = 0; i < n; i++) {
        
        fgets(movel[i].descricao, 50, stdin);
        movel[i].descricao[strlen(movel[i].descricao)-1] = '\0';
        
        scanf("%f%*c", &movel[i].peso);
        scanf("%c%*c", &movel[i].tipo);        

        //Avalia se o móvel termina com a palavra Real
        if(!strcmp(&movel[i].descricao[strlen(movel[i].descricao)-4], "Real")) {
            terminaEmReal++;
        }

        if(movel[i].peso > maiorPeso) {
            strcpy(maisPesado, movel[i].descricao);
            maiorPeso = movel[i].peso;
        }

        if(movel[i].tipo == 's' && movel[i].peso > 10) {
            maisDeDezKilos++;
        }
    }

    printf("Tipo 's' acima de 10Kg: %d\n", maisDeDezKilos);
    printf("Termina em  \"Real\": %d\n", terminaEmReal);
    printf("Mais pesado: \"%s\"\n", maisPesado);

    return 0;
}  