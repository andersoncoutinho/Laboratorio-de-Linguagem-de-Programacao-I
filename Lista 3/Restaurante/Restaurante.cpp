#include "Restaurante.h"

void Restaurante::adicionarPedido(Pedido pedido, int indice) {
    this->mesas[indice-1].adicionarPedido(pedido);
}

float Restaurante::calculaTotalRestaurante() {
    float total = 0;
    for(int i = 0; i < QTD_MAX; i++) {
        total += this->mesas[i].calculaTotal();
    }
    return total;
}

MesaDeRestaurante Restaurante::getMesa(int pos) {
    return this->mesas[pos];
}