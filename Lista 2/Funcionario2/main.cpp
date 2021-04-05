#include <iostream>
#include <vector>
#include "Funcionario2.h"

int main(void) {
    
    int n;
    std::cin >> n;
    getchar();

    std::vector<Funcionario2> funcionarios;

    for(int i = 0; i < n; i++) {
        
        std::string nome;
        std::string sobrenome;
        double salario;

        getline(std::cin, nome);
        getline(std::cin, sobrenome);
        std::cin >> salario;
        getchar();

        Funcionario2 funcionario(nome, sobrenome, salario);
        funcionarios.push_back(funcionario);

    }    


    for(int i = 0; i < n; i++) {
        
        std::cout << funcionarios.at(i).getNome() << " ";
        std::cout << funcionarios[i].getSobrenome() << " - ";
        std::cout << funcionarios[i].getSalario() << " - ";
        std::cout << funcionarios[i].getSalarioAnual() << std::endl;
        funcionarios[i].aumentaSalario(0.1);
        std::cout << funcionarios[i].getSalarioAnual() << std::endl;
        
    }
    
    return 0;
}