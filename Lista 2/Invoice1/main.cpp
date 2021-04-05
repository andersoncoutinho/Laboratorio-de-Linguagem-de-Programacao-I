#include <iostream>
#include <string>
#include "Invoice.h"

int main(void) {

    Invoice fatura1;
    Invoice fatura2;
    string nome;

    fatura1.descricao = "oi";

    std::cin >> fatura1.numero;
    std::getline(std::cin, fatura1.descricao);
    
    std::cin >> fatura1.qtdComprada;
    if(fatura1.qtdComprada < 0) {
        fatura1.qtdComprada = 0;
    }

    std::cin >> fatura1.preco;
    if(fatura1.preco < 0) {
        fatura1.preco = 0;
    }

    std::cin >> fatura2.numero;
    std::getline(std::cin, fatura2.descricao);
    
    std::cin >> fatura2.qtdComprada;
    if(fatura2.qtdComprada < 0) {
        fatura2.qtdComprada = 0;
    }

    std::cin >> fatura2.preco;
    if(fatura2.preco < 0) {
        fatura2.preco = 0;
    }

    std::cout << fatura1.numero << " - ";
    std::cout << fatura1.descricao << " - ";
    std::cout << fatura1.qtdComprada << " - ";
    std::cout << fatura1.preco << " - ";
    std::cout << fatura1.getInvoiceAmount() << std::endl;

    std::cout << fatura2.numero << " - ";
    std::cout << fatura2.descricao << " - ";
    std::cout << fatura2.qtdComprada << " - ";
    std::cout << fatura2.preco << " - ";
    std::cout << fatura2.getInvoiceAmount() << std::endl;

    return 0;
}