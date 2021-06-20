#ifndef ASSALARIADO_H
#define ASSALARIADO_H

#include "Funcionario.h"

class Assalariado : public Funcionario {
	public:
		Assalariado(std::string nome, int matricula, double salario);
		double calcularSalario();
	private:
		double salario;
};
#endif