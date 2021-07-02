#ifndef VACINA_H
#define VACINA_H

#include "Insumo.h"
#include <string>

class Vacina : public Insumo {
	public:
		Vacina();
		Vacina(std::string nome, int quantidade, double valorUnitario, std::string dtVencimento, std::string nomeFabricante,
				std::string tipo, int quantDoses, int intervalo);
		~Vacina();
	private:
		std::string tipo;
		int quantDoses;
		int intervalo;
};
#endif