#include "Insumo.h"  

#include <iostream>

Insumo::Insumo() {
	
}

Insumo::Insumo(std::string nome, int quantidade, double valorUnitario, std::string dtVencimento, std::string nomeFabricante) {
    this->nome = nome;
    this->quantidade = quantidade;
    this->valorUnitario = valorUnitario;
    this->dtVencimento = dtVencimento;
    this->nomeFabricante = nomeFabricante;
}
	
Insumo::~Insumo() {
	std::cout << "Deletando Insumos" << std::endl;
}