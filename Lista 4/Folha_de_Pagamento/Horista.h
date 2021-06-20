#ifndef HORISTA_H
#define HORISTA_H

#include "Funcionario.h"

class Horista : public Funcionario {
	public:
		Horista(std::string nome, int matricula, double salarioPorHora, double horasTrabalhadas);
		double calcularSalario();
	private:
		double salarioPorHora;
		double horasTrabalhadas;
};
#endif