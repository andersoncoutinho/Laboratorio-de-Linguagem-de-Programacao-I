#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include <string>	

class Funcionario {
	protected:
		std::string matricula;
		std::string nome;
		float salario;
	public:
		Funcionario();
		~Funcionario();
		std::string getNome();
		void setNome(std::string);
		std::string getMatricula();
		void setMatricula(std::string);
		float getSalario();
		void setSalario(float);

};

#endif