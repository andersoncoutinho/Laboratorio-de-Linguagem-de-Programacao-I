/*
1. Crie um tipo estruturado para armazenar os dados de uma pessoa (CPF, nome, sobrenome, endereço e telefone)
2. Seu programa deve ler do usuário um número inteiro n e depois ler as informações de n pessoas:
CPF
Nome
Sobrenome
Endereço (sem vírgulas)
Telefone
3. Depois, seu programa deve armazenar esses dados em um arquivo CSV.
4. A seguir, leia o conteúdo do arquivo criado no item anterior e imprima-o linha por linha.
*/

#include <stdio.h>
#include <string.h>

typedef struct {
    char cpf[20];
    char nome[50];
    char snome[50];
    char endereco[50];
    char telefone[20];
} tPessoa;

int main(void) {
    
    FILE *stream;
    stream = fopen("registro.csv", "w");

    tPessoa pessoa;
    strcpy(pessoa.cpf, "CPF");
    strcpy(pessoa.nome, "nome");
    strcpy(pessoa.snome, "snome");
    strcpy(pessoa.endereco, "endereço");
    strcpy(pessoa.telefone, "telefone");
    
    fwrite(pessoa.cpf, 1, strlen(pessoa.cpf), stream);
    fputc(',', stream);
    fwrite(pessoa.nome, 1, strlen(pessoa.nome), stream);
    fputc(',', stream);
    fwrite(pessoa.snome, 1, strlen(pessoa.snome), stream);
    fputc(',', stream);
    fwrite(pessoa.endereco, 1, strlen(pessoa.endereco), stream);
    fputc(',', stream);
    fwrite(pessoa.telefone, 1, strlen(pessoa.telefone), stream);
    fputc('\n', stream);

    int n;

    scanf("%d%*c", &n);

    while(n--) {

        scanf("%s", pessoa.cpf);
        scanf("%s", pessoa.nome);
        scanf("%s%*c", pessoa.snome);
        fgets(pessoa.endereco, 50, stdin);
        pessoa.endereco[strlen(pessoa.endereco)-1] = '\0';
        fgets(pessoa.telefone, 20, stdin);
        pessoa.telefone[strlen(pessoa.telefone)-1] = '\0';

        fwrite(pessoa.cpf, 1, strlen(pessoa.cpf), stream);
        fputc(',', stream);
        fwrite(pessoa.nome, 1, strlen(pessoa.nome), stream);
        fputc(',', stream);
        fwrite(pessoa.snome, 1, strlen(pessoa.snome), stream);
        fputc(',', stream);
        fwrite(pessoa.endereco, 1, strlen(pessoa.endereco), stream);
        fputc(',', stream);
        fwrite(pessoa.telefone, 1, strlen(pessoa.telefone), stream);
        fputc('\n', stream);

    }
    
    fclose(stream);
    stream = fopen("registro.csv", "r");
    while(1) {
        char c = fgetc(stream);
        if(feof(stream))
            break;
        else
            printf("%c", c);
    }

    return 0;
}   