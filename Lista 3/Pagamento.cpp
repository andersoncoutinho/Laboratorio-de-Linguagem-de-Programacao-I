#include "Pagamento.h"

Pagamento::Pagamento() {
    this->nomeDoFuncionario = "";
    this->valorPagamento = 0;
}

std::string Pagamento::getNomeDoFuncionario() {
    return this->nomeDoFuncionario;
}

void Pagamento::setNomeDoFuncionario(std::string nomeDoFuncionario) {
    this->nomeDoFuncionario = nomeDoFuncionario;
}

float Pagamento::getValorPagamento() {
    return this->valorPagamento;
}

void Pagamento::setValorPagamento(float valorPagamento) {
    this->valorPagamento = valorPagamento;
}