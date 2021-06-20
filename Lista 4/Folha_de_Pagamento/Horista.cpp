#include "Horista.h"  
	
Horista::Horista(std::string nome, int matricula, double salarioPorHora, double horasTrabalhadas)
: Funcionario(nome, matricula) {
	this->salarioPorHora = salarioPorHora;
    this->horasTrabalhadas = horasTrabalhadas;
}

double Horista::calcularSalario() {
    double salario;
    if(horasTrabalhadas <= 40) {
        salario = horasTrabalhadas * salarioPorHora;
    } else {
        salario = (40 * salarioPorHora) + ((horasTrabalhadas-40) * salarioPorHora * 1.5);
    }

    return salario * 4;
}