#include <iostream>
#include "Pessoa.h"

using namespace std;

int main(void) {

    int n;

    cin >> n;
    getchar();

    Pessoa *pessoas[n];

    for(int i = 0; i < n; i++) {
        string nome, telefone, rua, numero, bairro, cidade, estado, cep;
        getline(cin, nome);
        getline(cin, telefone);
        getline(cin, rua);
        getline(cin, numero);
        getline(cin, bairro);
        getline(cin, cidade);
        getline(cin, estado);
        getline(cin, cep);

        Endereco endereco(rua, numero, bairro, cidade, estado, cep);
        Pessoa pessoa(nome, endereco, telefone);
        pessoas[i] = new Pessoa(nome, endereco, telefone);
    }

    for(int i = 0; i < n; i++) {
        cout << pessoas[i]->toString() << endl << endl;
        delete pessoas[i];
    }

    return 0;
}