#include "Despesa.h"

Despesa::Despesa() {
    this->valor = 0;
}

void Despesa::setNome(std::string nome) {
    this->nome = nome;
}

std::string Despesa::getNome() {
    return this->nome;
}

void Despesa::setValor(float valor) {
    this->valor = valor;
}

float Despesa::getValor() {
    return this->valor;
}

void Despesa::setTipoDeGasto(std::string tipoDeGasto) {
    this->tipoDeGasto = tipoDeGasto;
}

std::string Despesa::getTipoDeGasto() {
    return this->tipoDeGasto;
}