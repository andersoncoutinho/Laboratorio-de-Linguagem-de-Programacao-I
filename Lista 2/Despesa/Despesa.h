#ifndef DESPESA_H
#define DESPESA_H

#include <string>

class Despesa {

    public:
        Despesa();
        void setNome(std::string);
        std::string getNome();
        void setValor(float);
        float getValor();
        void setTipoDeGasto(std::string);
        std::string getTipoDeGasto();
    private:
        std::string nome;
        float valor;
        std::string tipoDeGasto;
};

#endif