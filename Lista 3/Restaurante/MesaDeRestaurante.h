#ifndef MESADERESTAURANTE_H
#define MESADERESTAURANTE_H

#define QTD_MAX 100

#include "Pedido.h"

class MesaDeRestaurante {
    public:
        void adicionarPedido(Pedido p);
        void zeraPedidos();
        float calculaTotal();
        void exibeConta();
    private:
        Pedido pedidos[QTD_MAX];

};

#endif