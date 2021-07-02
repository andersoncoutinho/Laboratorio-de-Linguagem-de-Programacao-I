#ifndef EPI_H
#define EPI_H

#include "Insumo.h"

class Epi : public Insumo {
	public:
		Epi();
		Epi(std::string nome, int quantidade, double valorUnitario, std::string dtVencimento, std::string nomeFabricante,
				std::string tipo, std::string descricao);
		~Epi();
	private:
		std::string tipo;
		std::string descricao;

};
#endif