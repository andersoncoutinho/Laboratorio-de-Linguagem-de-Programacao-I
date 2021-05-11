#include "TrabalhadorAssalariado.h"  
	
TrabalhadorAssalariado::TrabalhadorAssalariado(float salario) {
	this->salario = salario;
}
	
TrabalhadorAssalariado::~TrabalhadorAssalariado() {
	
}

float TrabalhadorAssalariado::calcularPagamentoSemanal() {
    return (this->salario/4);
}