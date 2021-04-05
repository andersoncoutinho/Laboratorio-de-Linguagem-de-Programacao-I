#ifndef FUNCIONARIO1_H
#define FUNCIONARIO1_H

#include <string>

class Funcionario1 {
    
    public:
        std::string nome;
        std::string sobrenome;
        double salario;

        double getSalarioAnual();
};


#endif