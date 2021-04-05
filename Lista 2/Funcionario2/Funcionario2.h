#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include <string>

class Funcionario2 {
    
    public:
        Funcionario2(std::string, std::string, double);
        double getSalarioAnual();
        void aumentaSalario(float percent);
        void setNome(std::string);
        std::string getNome();
        void setSobrenome(std::string);
        std::string getSobrenome();
        void setSalario(double);
        double getSalario();

    private:
        std::string nome;
        std::string sobrenome;
        double salario;

};

#endif