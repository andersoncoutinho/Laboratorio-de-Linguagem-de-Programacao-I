#include <iostream>
#include "ContaCorrente.h"
#include "ContaEspecial.h"
#include "Poupanca.h"

int main(void) {
    
    Conta *conta[2];
    Poupanca poupanca;
    
    std::string nome;
    int numero;
    double salario;
    double taxaRendimento;
    double deposito, saque;
    
    for(int i = 0; i < 2; i++) {
        getline(std::cin, nome);
        std::cin >> numero;
        std::cin >> salario;
        std::cin >> deposito;
        std::cin >>saque;
        getchar();
        if(i == 0) {
            conta[i] = new ContaCorrente(nome, numero, salario);
        } else {
            conta[i] = new ContaEspecial(nome, numero, salario);

        }
        conta[i]->getInfo();
        conta[i]->depositar(deposito);
        conta[i]->sacar(saque);
        std::cout << "saldo total disponível: R$ " << conta[i]->saldoTotalDisponivel() << std::endl;
    }
    
    getline(std::cin, nome);
    std::cin >> numero;
    std::cin >> deposito;
    std::cin >>saque;
    getchar();

    poupanca = Poupanca(nome, numero, 51, 0.006);
    poupanca.getInfo();
    poupanca.depositar(deposito);
    poupanca.sacar(saque);
    poupanca.render();
    std::cout << "saldo total disponível: R$ " << poupanca.saldoTotalDisponivel() << std::endl;
  
    return 0;
}