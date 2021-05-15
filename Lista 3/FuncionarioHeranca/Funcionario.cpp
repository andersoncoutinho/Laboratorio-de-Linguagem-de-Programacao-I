#include "Funcionario.h"  
	
Funcionario::Funcionario() {
	
}
	
Funcionario::~Funcionario() {
	
}

std::string Funcionario::getNome() {
    return this->nome;
}

void Funcionario::setNome(std::string nome) {
    this->nome = nome;
}

float Funcionario::getSalario() {
    return this->salario;
}

void Funcionario::setSalario(float salario) {
    this->salario = salario;
}

std::string Funcionario::getMatricula() {
    return this->matricula;
}

void Funcionario::setMatricula(std::string matricula) {
    this->matricula = matricula;
}