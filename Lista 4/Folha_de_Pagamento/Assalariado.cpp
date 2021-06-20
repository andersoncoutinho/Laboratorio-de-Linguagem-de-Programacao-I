#include "Assalariado.h"  
	
Assalariado::Assalariado(std::string nome, int matricula, double salario)
 : Funcionario(nome, matricula) {
	this->salario = salario;
}

double Assalariado::calcularSalario() {
    return this->salario;
}