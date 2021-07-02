#ifndef MEDICAMENTO_H
#define MEDICAMENTO_H

#include <string>
#include "Insumo.h"	

class Medicamento : public Insumo {
	public:
		Medicamento();
		Medicamento(std::string nome, int quantidade, double valorUnitario, std::string dtVencimento, std::string nomeFabricante,
				std::string dosagem, std::string administracao, std::string disponibilizacao);
		~Medicamento();
	private:
		std::string dosagem;
		std::string administracao;
		std::string disponibilizacao;
};

#endif