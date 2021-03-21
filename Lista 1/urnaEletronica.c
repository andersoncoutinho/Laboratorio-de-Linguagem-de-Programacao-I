/*
Faça um sistema de votação para uma urna eletrônica, a qual deverá funcionar durante uma eleição.
Crie um tipo estruturado (Registro/Classe) para o candidato.
Esse tipo deverá ter os atributos: nome, número e quantidade de votos.
O sistema, inicialmente, deve ler a quantidade de candidatos da eleição.
Em seguida, devem ser cadastrados os candidatos, lendo do teclado, seus atributos de número e nome.
Por fim, deve ser iniciado o processo de votação onde será lido,
da entrada padrão, uma sequencia de votos (número do candidato).
Quando um número menor ou igual a zero for lido, a votação deve ser finalizada.
Caso seja digitado um número inválido, este deve ser contabilizado como voto Nulo.
Como resultado, deve ser exibido o boletim de urna,
indicando o percentual de votos, número e nome de todos os candidatos,
destacando a linha do candidato vencedor com o texto VENCEDOR no final da linha.
Exiba também a quantidade de votos Nulos. O percentual deve ser exibido com 2 casas decimais.
*/

#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[50];
    int numero;
    int votos;
} tCandidato;

int main(void) {
    
    int n, i, voto, invalidos = 0;
    double votosTotais = 0;

    scanf("%d", &n);

    tCandidato candidatos[n], vencedor;
    vencedor.votos = 0;

    for(i = 0; i < n; i++) {
        
        scanf("%d%*c", &candidatos[i].numero);
        fgets(candidatos[i].nome, 50, stdin);
        candidatos[i].nome[strlen(candidatos[i].nome)-1] = '\0';
        candidatos[i].votos = 0;
    }

    while(1) {
        scanf("%d", &voto);
        if(voto <= 0) break;
        
        votosTotais++;

        for(i = 0; i < n; i++) {
            if(voto == candidatos[i].numero) {
                candidatos[i].votos++;
                break;
            }
            if(i == (n-1)) invalidos++;
        }
    }

    for(i = 0; i < n; i++) {
        vencedor = candidatos[i].votos > vencedor.votos ? candidatos[i] : vencedor;        
    }

    for(i = 0; i < n; i++) {
        printf("%.2lf - %d - %s", ((double) candidatos[i].votos/votosTotais) * 100,
                                        candidatos[i].numero,
                                        candidatos[i].nome);
        
        if(!strcmp(candidatos[i].nome, vencedor.nome)) {
            puts(" VENCEDOR");
        } else {
            putchar('\n');
        }        
    }

    printf("%.2lf - Nulos\n", (invalidos / votosTotais) * 100);

    return 0;
}   