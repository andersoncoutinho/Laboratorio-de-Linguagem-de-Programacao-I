#include "Comissionado.h"  
	
Comissionado::Comissionado(std::string nome, int matricula, double vendasMensais, double percentualComissao)
 : Funcionario(nome, matricula) {
	this->vendasMensais = vendasMensais;
    this->percentualComissao = percentualComissao;
}

double Comissionado::calcularSalario() {
    return vendasMensais * percentualComissao * 10;
}