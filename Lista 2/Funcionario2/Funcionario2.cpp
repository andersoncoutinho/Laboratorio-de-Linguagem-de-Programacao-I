#include "Funcionario2.h"

#define QTD_MESES 12

Funcionario2::Funcionario2(std::string nome, std::string sobrenome, double salario){

    this->nome = nome;
    this->sobrenome = sobrenome;
    
    if(salario < 0) {
        this->salario = 0;
    } else {
        this->salario = salario;
    }
}

double Funcionario2::getSalarioAnual() {
    return (this->salario * QTD_MESES);
}

void Funcionario2::aumentaSalario(float percent) {
    this->salario *= (1 + percent); 
}

void Funcionario2::setNome(std::string nome) {
    this->nome = nome;
}

std::string Funcionario2::getNome() {
    return nome;
}

void Funcionario2::setSobrenome(std::string sobrenome) {
    this->sobrenome = sobrenome;
}

std::string Funcionario2::getSobrenome() {
    return this->sobrenome;
}

void Funcionario2::setSalario(double salario) {
    this->salario = salario;
}

double Funcionario2::getSalario() {
    return salario;
}