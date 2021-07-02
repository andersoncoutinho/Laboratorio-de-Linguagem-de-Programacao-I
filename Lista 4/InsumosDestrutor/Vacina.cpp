#include "Vacina.h"  
#include <iostream>

Vacina::Vacina() {
	
}

Vacina::Vacina(std::string nome, int quantidade, double valorUnitario, std::string dtVencimento, std::string nomeFabricante,
				std::string tipo, int quantDoses, int intervalo) : Insumo(nome, quantidade, valorUnitario, dtVencimento, nomeFabricante) {
            
        this->tipoInsumo = VACINA;
        this->tipo = tipo;
        this->intervalo = intervalo;
}
	
Vacina::~Vacina() {
    std::cout << "Deletando Vacina" << std::endl;
}