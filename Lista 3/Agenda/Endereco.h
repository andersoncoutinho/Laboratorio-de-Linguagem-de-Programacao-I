#ifndef ENDERECO_H
#define ENDERECO_H

#include <string>

class Endereco {
    public:
        Endereco();
        Endereco(std::string, std::string, std::string, std::string, std::string, std::string);
        std::string toString();
    private:
        std::string rua;
        std::string numero;
        std::string bairro;
        std::string cidade;
        std::string estado;
        std::string cep;

};

#endif