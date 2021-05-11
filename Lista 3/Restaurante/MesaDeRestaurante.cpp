#include "MesaDeRestaurante.h"

#include <iostream>

using namespace std;

void MesaDeRestaurante::adicionarPedido(Pedido p) {
    for(int i = 0; i < QTD_MAX; i++) {
        if(pedidos[i].getQuantidade() == 0) {
            this->pedidos[i] = p;
            break;
        } else if(pedidos[i].getDescricao() == p.getDescricao()) {
            pedidos[i].setQuantidade(pedidos[i].getQuantidade()+p.getQuantidade());
            break;
        }
    }
}

void MesaDeRestaurante::zeraPedidos() {
    for(int i = 0; i < QTD_MAX; i++) {
        pedidos[i].setQuantidade(0);
    }
}

float MesaDeRestaurante::calculaTotal() {
    float total = 0;
    for(int i = 0; i < QTD_MAX; i++) {
        total += (pedidos[i].getQuantidade() * pedidos[i].getPreco());
    }
    return total;
}

void MesaDeRestaurante::exibeConta() {
    for(int i = 0; i < QTD_MAX; i++) {
        if(this->pedidos[i].getQuantidade() > 0) {
            cout << pedidos[i].getNumero() << " - "
                << pedidos[i].getDescricao() << " - "
                << pedidos[i].getQuantidade() << " - "
                <<pedidos[i].getPreco() << " - R$ "
                << pedidos[i].getQuantidade() * pedidos[i].getPreco() << endl;
            
        } else {
            break;
        }
        
    }
}