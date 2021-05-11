#include <iostream>
#include "Trabalhador.h"
#include "TrabalhadorAssalariado.h"
#include "TrabalhadorPorHora.h"

using namespace std;

int main(void) {

    int n;
    TrabalhadorAssalariado *trabalhadorAssalariado;
    TrabalhadorPorHora *trabalhadorPorHora;
    cin >> n;
    getchar();

    for(int i = 0; i < n; i++) {
        int tipo;
        cin >> tipo;
        getchar();

        string nome;
        getline(cin, nome);

        switch(tipo) {
            case 1:
                float salario;
                cin >> salario;
                getchar();
                trabalhadorAssalariado = new TrabalhadorAssalariado(salario);
                trabalhadorAssalariado->setNome(nome);
                cout << trabalhadorAssalariado->getNome() << " - "
                    << "Semanal: R$ " << trabalhadorAssalariado->calcularPagamentoSemanal()
                    << " - Mensal: R$ " << trabalhadorAssalariado->getSalario() << endl;
                delete trabalhadorAssalariado;
                break;
            case 2:
                float valorDaHora;
                int horasSemanais;
                cin >> valorDaHora;
                cin >> horasSemanais;
                getchar();
                trabalhadorPorHora = new TrabalhadorPorHora(valorDaHora);
                trabalhadorPorHora->setNome(nome);

                cout << trabalhadorPorHora->getNome() << " - "
                    << "Semanal: R$ " << trabalhadorPorHora->calcularPagamentoSemanal(horasSemanais)
                    << " - Mensal: R$ " << trabalhadorPorHora->getSalario() << endl;
                delete trabalhadorPorHora;
                break;
        }
    }

    return 0;
}