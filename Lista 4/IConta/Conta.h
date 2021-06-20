#ifndef CONTA_H
#define CONTA_H

#include "IConta.h"
#include <string>	

class Conta : public IConta {
	public:
		Conta();
		Conta(std::string nomeCliente, std::string numeroConta, double salarioMensal);
		void sacar(double valor);
		void depositar(double valor);
		double saldoTotalDisponivel();
		void exibirInfo();
	protected:
		std::string nomeCliente;
		std::string numeroConta;
		double salarioMensal;
		double saldo;
		double limite;
		virtual void definirLimite();
};
#endif