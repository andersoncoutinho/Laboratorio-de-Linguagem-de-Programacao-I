#ifndef PAGAMENTO_H
#define PAGAMENTO_H

#include <string>

class Pagamento {
    public:
        Pagamento();
        std::string getNomeDoFuncionario();
        void setNomeDoFuncionario(std::string);
        float getValorPagamento();
        void setValorPagamento(float);
    private:
        std::string nomeDoFuncionario;
        float valorPagamento;
};

#endif