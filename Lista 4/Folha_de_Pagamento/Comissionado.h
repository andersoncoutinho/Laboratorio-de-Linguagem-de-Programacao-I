#ifndef COMISSIONADO_H
#define COMISSIONADO_H

#include "Funcionario.h"

class Comissionado : public Funcionario {
	public:
		Comissionado(std::string nome, int matricula, double vendasMensais, double percentualComissao);
		double calcularSalario();
	private:
		double vendasMensais;
		double percentualComissao;
};
#endif