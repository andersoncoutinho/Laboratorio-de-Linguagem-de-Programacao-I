#include <iostream>
#include "SistemaGerenciaFolha.h"
#include "Assalariado.h"
#include "Horista.h"
#include "Comissionado.h"
#include "FuncionarioNaoExisteException.h"
#include "OrcamentoEstouradoException.h"

int main(void) {

    double orcamentoMaximo;
    std::string nome;
    int matricula;
    double salario, horas, percentual;
    Funcionario *funcionario;

    std::cin >> orcamentoMaximo;
    getchar();
    SistemaGerenciaFolha folha(orcamentoMaximo);


    getline(std::cin, nome);
    std::cin >> matricula;
    std::cin >> salario;
    getchar();
    funcionario = new Assalariado(nome, matricula, salario);
    folha.setFuncionario(funcionario);

    getline(std::cin, nome);
    std::cin >> matricula;
    std::cin >> salario;
    std::cin >> horas;
    getchar();
    funcionario = new Horista(nome, matricula, salario, horas);
    folha.setFuncionario(funcionario);

    getline(std::cin, nome);
    std::cin >> matricula;
    std::cin >> salario;
    std::cin >> percentual;
    getchar();
    funcionario = new Comissionado(nome, matricula, salario, percentual);
    folha.setFuncionario(funcionario);

    std::string nomes[3];

    getline(std::cin, nomes[0]);
    getline(std::cin, nomes[1]);
    getline(std::cin, nomes[2]);

    for(int i = 0; i < 3; i++) {
        try {
            std::cout << folha.consultaSalarioFuncionario(nomes[i]) << std::endl;
        } catch(FuncionarioNaoExisteException &ex) {
            ex.info();
            putchar('\n');
        }
    }

    try {
        std::cout << folha.calculaValorTotalFolha() << std::endl;
    } catch(OrcamentoEstouradoException &ex) {
        ex.info();
        putchar('\n');
    }
    return 0;
}