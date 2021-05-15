#include "Consultor.h"  
	
Consultor::Consultor() {
	
}
	
Consultor::~Consultor() {
	
}

float Consultor::getSalario() {
    return this->salario * 1.1;
}

float Consultor::getSalario(float percentual) {
    return this->salario * (1+percentual);
}