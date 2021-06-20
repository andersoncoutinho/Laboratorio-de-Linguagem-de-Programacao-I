#include "SistemaGerenciaFolha.h" 
#include "FuncionarioNaoExisteException.h"
#include "OrcamentoEstouradoException.h"
	
SistemaGerenciaFolha::SistemaGerenciaFolha() {
	
}

SistemaGerenciaFolha::SistemaGerenciaFolha(double orcamento) {
    this->orcamentoMaximo = orcamento;
}

void SistemaGerenciaFolha::setFuncionario(Funcionario *funcionario) {
    funcionarios.push_back(funcionario);
}

double SistemaGerenciaFolha::calculaValorTotalFolha() {
    double total = 0;
    for(int i = 0; i < funcionarios.size(); i++) {
        total += funcionarios[i]->calcularSalario();
    }

    if(total > orcamentoMaximo) {
        throw OrcamentoEstouradoException(total);
    }
    return total;
}

double SistemaGerenciaFolha::consultaSalarioFuncionario(std::string nome) {
    for(int i = 0; i < funcionarios.size(); i++) {
        if(funcionarios[i]->getNome() == nome) {
            return funcionarios[i]->calcularSalario();
        }
    }

    throw FuncionarioNaoExisteException(nome);
}