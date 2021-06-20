#include "OrcamentoEstouradoException.h"  

#include <iostream>

OrcamentoEstouradoException::OrcamentoEstouradoException(double valor) {
	this->valor = valor;
}

void OrcamentoEstouradoException::info() {
    std::cout << "OrcamentoEstouradoException " << valor;
}