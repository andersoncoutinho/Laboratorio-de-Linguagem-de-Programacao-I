/*
Faça um programa que apresente um Menu com 4 opções.
Em seguida, leia, da entrada padrão a opção desejada.
Por fim, apresente a opção selecionada, e volte ao início do Menu.
Caso a opção tenha sido o item 4 o programa deve ser finalizado.
Caso uma opção invalida lida, apresente a mensagem "Opcao <ValorOpcao> Invalida".

Exemplo do menu:

1 - Item 1
2 - Item 2
3 - Item 3
4 - Sair
*/

#include <stdio.h>

void printMenu() {
    printf("1 - Item 1\n");
    printf("2 - Item 2\n");
    printf("3 - Item 3\n");
    printf("4 - Sair\n");
}

void leOpcao(int *opcao) {
    scanf("%d", opcao);
}

void processaoOpcao(int opcao) {
    if(opcao >= 1 && opcao <= 3) {
        printf("Item %d\n", opcao);
    } else if (opcao != 4) {
        printf("Opcao %d Invalida\n", opcao);
    } else {
        puts("Sair");
    }
}

int main(void) {
    int opcao;
    
    do {
        printMenu();
        leOpcao(&opcao);
        processaoOpcao(opcao);
    } while(opcao != 4);
    
    return 0;
}