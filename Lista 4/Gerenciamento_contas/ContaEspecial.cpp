#include "ContaEspecial.h"  
	
ContaEspecial::ContaEspecial() {
	
}

ContaEspecial::ContaEspecial(std::string nomeCliente, int numero, double salario) 
    : ContaCorrente(nomeCliente, numero, salario){
    
    definirLimite();
}

double ContaEspecial::definirLimite() {
    this->limite = salario*4;
    return limite;
}