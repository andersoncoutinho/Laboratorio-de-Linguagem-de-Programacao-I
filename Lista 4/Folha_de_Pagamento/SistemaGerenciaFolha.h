#ifndef SISTEMAGERENCIAFOLHA_H
#define SISTEMAGERENCIAFOLHA_H

#include <vector>
#include "Funcionario.h"

class SistemaGerenciaFolha  {
	public:
		SistemaGerenciaFolha();
		SistemaGerenciaFolha(double);
		void setFuncionario(Funcionario *);
		double calculaValorTotalFolha();
		double consultaSalarioFuncionario(std::string nome);
	private:
		std::vector<Funcionario*> funcionarios;
		double orcamentoMaximo;
};
#endif