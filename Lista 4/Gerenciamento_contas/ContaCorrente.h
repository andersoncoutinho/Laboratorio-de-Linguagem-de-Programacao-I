#ifndef CONTACORRENTE_H
#define CONTACORRENTE_H

#include "Conta.h"

class ContaCorrente : public Conta {
	public:
		ContaCorrente();
		ContaCorrente(std::string nomeCliente, int numero, double salario);
		void getInfo();
		virtual double saldoTotalDisponivel();
		void setSalario(double);
		double getSalario();
		void setLimite(double);
		double getLimite();
		double limite;
		double salario;
	private:
		virtual double definirLimite();
};
#endif