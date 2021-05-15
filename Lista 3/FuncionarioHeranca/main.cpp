#include <iostream>
#include "Consultor.h"
#include "Funcionario.h"

using namespace std;

int main(void) {

    Funcionario funcionario;
    Consultor consultor;
    
    string matricula;
    string nome;
    float salario;

    getline(cin, matricula);
    getline(cin, nome);
    cin >> salario;
    getchar();

    funcionario.setMatricula(matricula);
    funcionario.setNome(nome);
    funcionario.setSalario(salario);

    getline(cin, matricula);
    getline(cin, nome);
    cin >> salario;
    getchar();

    consultor.setMatricula(matricula);
    consultor.setNome(nome);
    consultor.setSalario(salario);

    cout << funcionario.getMatricula() << " - " << funcionario.getNome() << " - R$ " << funcionario.getSalario() << endl;
    cout << consultor.getMatricula() << " - " << consultor.getNome() << " - R$ " << consultor.getSalario() << endl;

    return 0;
    
}