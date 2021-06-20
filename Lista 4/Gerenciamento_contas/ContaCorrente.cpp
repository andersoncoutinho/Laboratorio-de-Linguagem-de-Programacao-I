#include "ContaCorrente.h"
#include <iostream>
	
ContaCorrente::ContaCorrente() {
	
}

ContaCorrente::ContaCorrente(std::string nomeCliente, int numero, double salario) 
    : Conta(nomeCliente, numero) {
        this->salario = salario;
        this->limite = limite;
        definirLimite();
}

double ContaCorrente::saldoTotalDisponivel() {
    return saldo + limite;
}

void ContaCorrente::getInfo() {
    Conta::getInfo();
    std::cout  << "salário " << salario << ", ";
}

double ContaCorrente::definirLimite() {
    this->limite = salario*2;
    return limite;
}

void ContaCorrente::setSalario(double salario) {
    this->salario = salario;
}

double ContaCorrente::getSalario() {
    return this->salario;
}

void ContaCorrente::setLimite(double limite) {
    this->limite = limite;
}

double ContaCorrente::getLimite() {
    return this->limite;
}