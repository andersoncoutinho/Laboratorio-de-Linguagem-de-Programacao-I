#include <iostream>
#include "Pessoa1.h"

int main(void) {

    Pessoa1 pessoa1;
    Pessoa1 pessoa2;

    getline(std::cin, pessoa1.nome);
    std::cin >> pessoa1.idade;
    getchar();
    getline(std::cin, pessoa1.telefone);

    getline(std::cin, pessoa2.nome);
    std::cin >> pessoa2.idade;
    getchar();
    getline(std::cin, pessoa2.telefone);

    std::cout << pessoa1.nome << ", ";
    std::cout << pessoa1.idade << ", ";
    std::cout << pessoa1.telefone << std::endl;


    std::cout << pessoa2.nome << ", ";
    std::cout << pessoa2.idade << ", ";
    std::cout << pessoa2.telefone << std::endl;

    return 0;
}