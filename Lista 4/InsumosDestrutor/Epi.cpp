#include <iostream>
#include "Epi.h"  
	
Epi::Epi() {
	
}

Epi::Epi(std::string nome, int quantidade, double valorUnitario, std::string dtVencimento, std::string nomeFabricante,
				std::string tipo, std::string descricao) : Insumo(nome, quantidade, valorUnitario, dtVencimento, nomeFabricante) {
	
	this->tipoInsumo = EPI;

	this->tipo = tipo;
	this->descricao = descricao;

}
	
Epi::~Epi() {
	std::cout << "Deletando EPI" << std::endl;
}