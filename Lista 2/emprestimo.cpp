/*
Uma empresa abriu uma linha de crédito para os funcionários.
O valor da prestação não pode ultrapassar 30% do salário.
Faça um programa que receba o salário,
o valor do empréstimo e o número de prestações
e informe se o empréstimo pode serconcedido.
Nenhum dos valores informados pode ser zero ou negativo.
*/

#include <iostream>

using namespace std;

typedef struct {
    double salario;
    double emprestimo;
    double prestacoes;
} tFuncionario;

void lerValor(double *variavel) {
    do{
        cin >> *variavel;
    } while (*variavel <= 0);
}

bool foiAprovado(tFuncionario funcionario) {
    return funcionario.emprestimo/funcionario.prestacoes <= funcionario.salario*0.3;
}

int main(void) {

    tFuncionario funcionario;

    lerValor(&funcionario.salario);
    lerValor(&funcionario.emprestimo);
    lerValor(&funcionario.prestacoes);

    if(foiAprovado(funcionario)) {
        cout << "Emprestimo pode ser concedido" << endl;
    } else {
        cout << "Emprestimo nao pode ser concedido" << endl;
    }

    return 0;
}