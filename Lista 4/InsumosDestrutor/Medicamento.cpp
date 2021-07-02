#include <iostream>
#include "Medicamento.h"  

Medicamento::Medicamento() {
	
}

Medicamento::Medicamento(std::string nome, int quantidade, double valorUnitario, std::string dtVencimento, std::string nomeFabricante,
				std::string dosagem, std::string administracao, std::string disponibilizacao) : Insumo(nome, quantidade, valorUnitario, dtVencimento, nomeFabricante) {

	this->tipoInsumo = MEDICAMENTO;
	this->dosagem = dosagem;
	this->administracao = administracao;
	this->disponibilizacao = disponibilizacao;

}
	
Medicamento::~Medicamento() {
	std::cout << "Deletando Medicamento" << std::endl;
}