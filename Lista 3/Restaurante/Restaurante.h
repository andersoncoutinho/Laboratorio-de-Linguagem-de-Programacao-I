#ifndef RESTAURANTE_H
#define RESTAURANTE_H

#include "MesaDeRestaurante.h"

class Restaurante {
    public:
        void adicionarPedido(Pedido, int);
        float calculaTotalRestaurante();
        MesaDeRestaurante getMesa(int);
    private:
        MesaDeRestaurante mesas[QTD_MAX];
};

#endif
