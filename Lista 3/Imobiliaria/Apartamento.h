#ifndef APARTAMENTO_H
#define APARTAMENTO_H

#include "Imovel.h"

class Apartamento : public Imovel {
	private:
		int quartos;
		int andar;
		float valorCondominio;
		int vagasGaragem;
	public:
		Apartamento(int);
		~Apartamento();
		float exibeAtributos();
		void lerAtributos();
};

#endif