#include <iostream>
#include "Funcionario1.h"

int main(void) {

    int n;
    std::cin >> n;
    getchar();

    Funcionario1 funcionarios[n];

    for(int i = 0; i < n; i++) {
        getline(std::cin, funcionarios[i].nome);
        getline(std::cin, funcionarios[i].sobrenome);
        std::cin >> funcionarios[i].salario;
        getchar();
    }

    for(int i = 0; i < n; i++) {
        std::cout << funcionarios[i].nome << " ";
        std::cout << funcionarios[i].sobrenome << " - ";
        std::cout << funcionarios[i].salario << " - ";
        std::cout << funcionarios[i].getSalarioAnual() << std::endl;
    }

    return 0;
}