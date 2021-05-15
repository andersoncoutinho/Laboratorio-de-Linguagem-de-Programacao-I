#ifndef PEDIDO_H
#define PEDIDO_H

#include <string>

class Pedido {
    public:
        Pedido();
        Pedido(int, std::string, int, float);
        int getQuantidade();
        std::string getDescricao();
        void setQuantidade(int);
        float getPreco();
        int getNumero();
    private:
        int numero;
        std::string descricao;
        int quantidade;
        float preco;
};

#endif