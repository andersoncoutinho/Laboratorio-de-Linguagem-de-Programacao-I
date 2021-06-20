#ifndef FUNCIONARIONAOEXISTEEXCEPTION_H
#define FUNCIONARIONAOEXISTEEXCEPTION_H

#include <exception>
#include <string>

class FuncionarioNaoExisteException : public std::exception {
	public:
		FuncionarioNaoExisteException(std::string);
		void info();
	private:
		std::string nome;

};
#endif