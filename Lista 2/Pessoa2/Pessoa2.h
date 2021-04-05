#ifndef PESSOA2_H
#define PESSOA2_H

#include <string>

class Pessoa2 {
    
    public:
        Pessoa2(std::string);
        Pessoa2(std::string, int, std::string);
        std::string getNome();
        void setNome(std::string);
        int getIdade();
        void setIdade(int);
        std::string getTelefone();
        void setTelefone(std::string);

    private:
        std::string nome;
        int idade;
        std::string telefone;
};

#endif