#include "Conta.h"  
#include <iostream>

Conta::Conta() {
	
}

Conta::Conta(std::string nomeCliente, int numero) {
    this->nomeCliente = nomeCliente;
    this->numero = numero;
}

void Conta::sacar(double valor) {
    if(valor > this->saldo) {
        std::cout << "\nsaldo insuficiente\n";
    } else {
        saldo -= valor;
    }
}

void Conta::depositar(double valor) {
    this->saldo += valor;
}

double Conta::saldoTotalDisponivel() {
    return saldo;
}

void Conta::getInfo(){
    std::cout << nomeCliente << ", cc: " << numero << ", ";
}

void Conta::setNomeCliente(std::string nome) {
    this->nomeCliente = nome;
}

std::string Conta::getNomeCliente() {
    return this->nomeCliente;
}

void Conta::setNumero(int numero) {
    this->numero = numero;
}

int Conta::getNumero() {
    return this->numero;
}

void Conta::setSaldo(double saldo) {
    this->saldo = saldo;
}

double Conta::getSaldo() {
    return this->saldo;
}