#include "Pessoa2.h"

Pessoa2::Pessoa2(std::string nome) {
    this->nome = nome;
}

Pessoa2::Pessoa2(std::string nome, int idade, std::string telefone) {
    this->nome = nome;
    this->idade = idade;
    this->telefone = telefone;
}

std::string Pessoa2::getNome() {
    return this->nome;
}

void Pessoa2::setNome(std::string nome) {
    this->nome = nome;
}

int Pessoa2::getIdade() {
    return this->idade;
}

void Pessoa2::setIdade(int idade) {
    this->idade = idade;
}

std::string Pessoa2::getTelefone() {
    return this->telefone;
}

void Pessoa2::setTelefone(std::string telefone) {
    this->telefone = telefone;
}