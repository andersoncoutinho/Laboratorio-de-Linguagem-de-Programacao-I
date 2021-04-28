#include "Pessoa.h"
#include <string>

Pessoa::Pessoa(std::string nome) {
    this->nome = nome;
}

Pessoa::Pessoa(std::string nome, Endereco endereco, std::string telefone) {
    this->nome = nome;
    this->endereco = endereco;
    this->telefone = telefone;
}

std::string Pessoa::getNome() {
    return this->nome;
}

void Pessoa::setNome(std::string nome) {
    this->nome = nome;
}

Endereco Pessoa::getEndereco() {
    return this->endereco;
}

void Pessoa::setEndereco(Endereco endereco) {
    this->endereco = endereco;
}

std::string Pessoa::getTelefone() {
    return this->telefone;
}

void Pessoa::setTelefone(std::string telefone) {
    this->telefone = telefone;
}

std::string Pessoa::toString() {
    return (this->nome + ", " + this->telefone + "\n" + this->endereco.toString());
}