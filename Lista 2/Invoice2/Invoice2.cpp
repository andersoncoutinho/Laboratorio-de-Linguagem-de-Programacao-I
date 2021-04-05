#include <iostream>
#include "Invoice2.h"

Invoice2::Invoice2(int numero,std::string descricao, int qtd, double preco) {

    this->numero = numero;
    this->descricao = descricao;

    if(qtd < 0) {
        this->qtd = 0;
    } else {
        this->qtd = qtd;
    }

    if(preco < 0) {
        this->preco = 0;
    } else {
        this->preco = preco;
    }
}

void Invoice2::print() {
    std::cout << numero << " - ";
    std::cout << descricao << " - ";
    std::cout << qtd << " - ";
    std::cout << preco << " - ";
    std::cout << getInvoiceAmount() << std::endl;
}

double Invoice2::getInvoiceAmount(){
    return (qtd * preco);
}

int Invoice2::getNumero() {
    return numero;
}

void Invoice2::setNumero(int numero) {
    this->numero = numero;
}

std::string Invoice2::getDescricao() {
    return descricao;
}

void Invoice2::setDescricao(std::string descricao) {
    this->descricao = descricao;
}

int Invoice2::getQtd() {
    return qtd;
}

void Invoice2::setQtd(int qtd) {
    this->qtd = qtd;
}

double Invoice2::getPreco() {
    return preco;
}

void Invoice2::setPreco(double preco) {
    this->preco = preco;
}