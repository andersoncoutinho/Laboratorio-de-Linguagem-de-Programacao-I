#ifndef CONTAESPECIAL_H
#define CONTAESPECIAL_H

#include "Conta.h"

class ContaEspecial : public Conta {
	public:
		ContaEspecial();
		ContaEspecial(std::string nomeCliente, std::string numeroConta, double salarioMensal);
	private:
		void definirLimite();


};
#endif