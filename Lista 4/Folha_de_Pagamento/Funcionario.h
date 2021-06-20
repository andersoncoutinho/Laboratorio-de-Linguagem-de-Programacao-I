#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include <string>

class Funcionario {
	public:
		Funcionario(std::string nome, int matricula);
		virtual double calcularSalario() = 0;
		void setNome(std::string);
		std::string getNome();
		void setMatricula(int);
		int getMatricula();
	private:
		std::string nome;
		int matricula;

};
#endif