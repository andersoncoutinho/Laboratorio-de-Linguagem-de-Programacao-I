#ifndef CASA_H
#define CASA_H

#include "Imovel.h"
	
class Casa : public Imovel {
	private:
		int pavimentos;
		int quartos;
		float areaConstruida;
	public:
		Casa(int);
		~Casa();
		float exibeAtributos();
		void lerAtributos();
};
#endif