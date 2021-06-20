#ifndef ORCAMENTOESTOURADOEXCEPTION_H
#define ORCAMENTOESTOURADOEXCEPTION_H

#include <exception>
#include <string>

class OrcamentoEstouradoException : public std::exception {
	public:
		OrcamentoEstouradoException(double valor);
		void info();
	private:
		std::string nome;
		double valor;
};
#endif