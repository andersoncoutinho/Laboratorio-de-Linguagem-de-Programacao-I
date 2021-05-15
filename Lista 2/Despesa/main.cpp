#include "Despesa.h"
#include "ControleDeGastos.h"
#include <iostream>

int main(void) {

    int n;
    std::cin >> n;
    getchar();
    ControleDeGastos controle;

    for(int i = 0; i < n; i++) {
    
        std::string nome;
        float valor;
        std::string tipo;
        Despesa despesa;

        getline(std::cin, nome);
        std::cin >> valor;
        getchar();
        getline(std::cin, tipo);

        despesa.setNome(nome);
        despesa.setValor(valor);
        despesa.setTipoDeGasto(tipo);

        controle.setDespesa(despesa, i);

    }

    std::string tipo;
    getline(std::cin, tipo);
    if(controle.existeDespesaDoTipo(tipo)) {

        for(int i = 0; i < 100; i++) {
            if(controle.getDespesa(i).getTipoDeGasto().find(tipo) != std::string::npos) {
                std::cout << controle.getDespesa(i).getNome() << ", ";
                std::cout << "R$ " << controle.getDespesa(i).getValor() << std::endl;
            }
        }

    } else {

        std::cout << "Nenhuma despesa do tipo especificado" << std::endl;

    }

    std::cout << "Total: " << controle.calculaTotalDeDespesas(tipo) << "/";
    std::cout << controle.calculaTotalDeDespesas() << std::endl;

    return 0;
}