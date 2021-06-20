#include "Conta.h"  
#include <iostream>

Conta::Conta(){}

Conta::Conta(std::string nomeCliente, std::string numeroConta, double salarioMensal) {
    this->nomeCliente = nomeCliente;
    this->numeroConta = numeroConta;
    this->salarioMensal = salarioMensal;
    definirLimite();
}

void Conta::definirLimite() {
    this->limite = salarioMensal * 2;
}

void Conta::sacar(double valor) {
    this->saldo -= valor;
}

void Conta::depositar(double valor) {
    this->saldo += valor;
}

double Conta::saldoTotalDisponivel() {
    return (saldo + limite);
}

void Conta::exibirInfo() {
    std::cout << nomeCliente
        << ", cc: " << numeroConta
        << ", salário " << salarioMensal
        << ", saldo total disponível: R$ " << saldoTotalDisponivel() << std::endl; 
}