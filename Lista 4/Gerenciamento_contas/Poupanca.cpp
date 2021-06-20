#include "Poupanca.h"  
	
Poupanca::Poupanca() {
	
}

Poupanca::Poupanca(std::string nomeCliente, int numero, int variacao, double taxaRendimento) 
    : Conta(nomeCliente, numero) {
        this->variacao = variacao;
        this->taxaRendimento = taxaRendimento;
}

double Poupanca::render() {
    if(this->variacao == 51) {
        saldo += (saldo * taxaRendimento);
    } else if(variacao == 1) {
    }
    return saldo;
}

void Poupanca::setVariacao(int variacao) {
    this->variacao = variacao;
}

int Poupanca::getvariacao() {
    return this->variacao;
}

void Poupanca::setTaxaRendimento(double taxaRendimento) {
    this->taxaRendimento = taxaRendimento;
}

double Poupanca::getTaxaRendimento() {
    return this->taxaRendimento;
}