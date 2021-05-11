#include "Trabalhador.h"  
	
Trabalhador::Trabalhador() {
    this->salario = 0;
}
	
Trabalhador::~Trabalhador() {
	
}

std::string Trabalhador::getNome() {
    return this->nome;
}

void Trabalhador::setNome(std::string nome) {
    this->nome = nome;
}

float Trabalhador::getSalario() {
    return this->salario;
}

void Trabalhador::setSalario(float salario) {
    this->salario = salario;
}