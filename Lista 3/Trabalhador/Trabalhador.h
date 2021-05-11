#ifndef TRABALHADOR_H
#define TRABALHADOR_H

#include <string>	

class Trabalhador {
	protected:
		std::string nome;
		float salario;
	public:
		std::string getNome();
		void setNome(std::string);
		float getSalario();
		void setSalario(float);
		Trabalhador();
		~Trabalhador();

};
#endif