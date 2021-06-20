#ifndef POUPANCA_H
#define POUPANCA_H

#include "Conta.h"

class Poupanca : public Conta {
	public:
		Poupanca();
		Poupanca(std::string nomeCliente, int numero, int variacao, double taxaRendimento);
		double render();
		void setVariacao(int);
		int getvariacao();
		void setTaxaRendimento(double);
		double getTaxaRendimento();
	private:
		int variacao;
		double taxaRendimento;

};
#endif