#include <iostream>
#include "Invoice2.h"

int main(void) {

    int numero;
    std::string descricao;
    int qtd;
    double preco;

    std::cin >> numero;
    getchar();
    getline(std::cin, descricao);
    std::cin >> qtd;
    std::cin >> preco;
    Invoice2 fatura1(numero, descricao, qtd, preco);

    std::cin >> numero;
    getchar();
    getline(std::cin, descricao);
    std::cin >> qtd;
    std::cin >> preco;
    Invoice2 fatura2(numero, descricao, qtd, preco);

    fatura1.print();
    fatura2.print();

    return 0;
}