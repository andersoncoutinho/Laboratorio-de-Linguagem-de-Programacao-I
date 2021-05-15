#ifndef CONSULTOR_H
#define CONSULTOR_H

#include "Funcionario.h"

class Consultor: public Funcionario {
	private:

	public:
		float getSalario();
		float getSalario(float percentual);
		Consultor();
		~Consultor();

};

#endif