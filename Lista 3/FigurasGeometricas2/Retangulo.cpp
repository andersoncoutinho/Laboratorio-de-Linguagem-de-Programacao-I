#include "Retangulo.h"
#include <iostream>

using namespace std;

Retangulo::Retangulo(int tipo):FiguraGeometrica(tipo) {
    this->nome = "Retângulo";
}

float Retangulo::calcularArea() {
    return (this->comprimento * this->largura);
}

void Retangulo::lerAtributosArea() {
    cin >> this->comprimento;
    cin >> this->largura;
    getchar();
}