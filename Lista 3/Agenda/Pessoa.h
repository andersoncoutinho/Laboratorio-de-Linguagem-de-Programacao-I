#ifndef PESSOA_H
#define PESSOA_H

#include "Endereco.h"
#include <string>

class Pessoa {
    public:
        Pessoa(std::string nome);
        Pessoa(std::string nome, Endereco endereco, std::string telefone);
        std::string getNome();
        void setNome(std::string);
        Endereco getEndereco();
        void setEndereco(Endereco);
        std::string getTelefone();
        void setTelefone(std::string);
        std::string toString();
    private:
        std::string nome;
        Endereco endereco;
        std::string telefone;
};

#endif