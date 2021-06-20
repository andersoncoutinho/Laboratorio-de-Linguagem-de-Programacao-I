#include "ContaEspecial.h"  

ContaEspecial::ContaEspecial(){}
	
ContaEspecial::ContaEspecial(std::string nomeCliente, std::string numeroConta, double salarioMensal)
    : Conta(nomeCliente, numeroConta, salarioMensal) {
	definirLimite();
}

void ContaEspecial::definirLimite() {
    this->limite = salarioMensal * 3;
}