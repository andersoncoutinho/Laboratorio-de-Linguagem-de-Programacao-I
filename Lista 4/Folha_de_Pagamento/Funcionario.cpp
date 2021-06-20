#include "Funcionario.h"

Funcionario::Funcionario(std::string nome, int matricula) {
    this->nome = nome;
    this->matricula = matricula;
}

void Funcionario::setNome(std::string nome) {
    this->nome = nome;
}

std::string Funcionario::getNome() {
    return this->nome;
}

void Funcionario::setMatricula(int matricula) {
    this->matricula = matricula;
}

int Funcionario::getMatricula() {
    return this->matricula;
}