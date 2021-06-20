#include <iostream>
#include "Conta.h"
#include "ContaEspecial.h"

int main(void) {

    Conta conta;
    ContaEspecial contaEspecial;

    std::string nome, numeroConta;
    double salario, deposito, saque;

    getline(std::cin, nome);
    std::cin >> numeroConta;
    std::cin >> salario;
    std::cin >> deposito;
    std::cin >> saque;
    getchar();

    conta = Conta(nome, numeroConta, salario);
    conta.depositar(deposito);
    conta.sacar(saque);

    getline(std::cin, nome);
    std::cin >> numeroConta;
    std::cin >> salario;
    std::cin >> deposito;
    std::cin >> saque;

    contaEspecial = ContaEspecial(nome, numeroConta, salario);
    contaEspecial.depositar(deposito);
    contaEspecial.sacar(saque);

    conta.exibirInfo();
    contaEspecial.exibirInfo();

    return 0;
}