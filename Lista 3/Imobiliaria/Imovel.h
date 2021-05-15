#ifndef IMOVEL_H
#define IMOVEL_H

#include <string>
#define INDEFINIDO 0
#define CASA 1
#define APARTAMENTO 2
#define TERRENO 3	

class Imovel {
	public:
		Imovel();
		~Imovel();
		virtual float exibeAtributos() = 0;
		virtual void lerAtributos() = 0;
	protected:
		std::string nome;
		float valor;
		std::string tipoDeTransacao;
		float area;
};

#endif