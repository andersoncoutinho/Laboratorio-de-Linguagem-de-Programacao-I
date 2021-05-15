#include "Pedido.h"

Pedido::Pedido() {
    this->quantidade = 0;
}

Pedido::Pedido(int numero, std::string descricao, int qtd, float preco) {
    this->numero = numero;
    this->descricao = descricao;
    this->quantidade = qtd;
    this->preco = preco;
}

std::string Pedido::getDescricao() {
    return this->descricao;
}

int Pedido::getQuantidade() {
    return this->quantidade;
}

void Pedido::setQuantidade(int qtd) {
    this->quantidade = qtd;
}

float Pedido::getPreco() {
    return this->preco;
}

int Pedido::getNumero() {
    return this->numero;
}

