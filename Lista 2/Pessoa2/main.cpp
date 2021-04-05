#include <iostream>
#include <vector>
#include "Pessoa2.h"

int main(void) {

    int n;
    std::cin >> n;
    getchar();
    
    std::vector<Pessoa2> pessoas;

    for(int i = 0; i < n; i++) {
        
        std::string nome;
        int idade;
        std::string telefone;

        getline(std::cin, nome);
        
        std::cin >> idade;
        getchar();

        getline(std::cin, telefone);

        Pessoa2 pessoa(nome, idade, telefone);
        pessoas.push_back(pessoa);

    }

    std::string nome;
    getline(std::cin, nome);
    bool pessoaEncontrada = false;

    for(Pessoa2 pessoa : pessoas) {
        
        if(pessoa.getNome().find(nome) != std::string::npos) {
            pessoaEncontrada = true;
            std::cout << pessoa.getNome() << ", ";
            std::cout << pessoa.getIdade() << ", ";
            std::cout << pessoa.getTelefone() << std::endl;
        }
    }

    if(!pessoaEncontrada) {
        std::cout << "Pessoa não encontrada" << std::endl;
    }

    return 0;
}