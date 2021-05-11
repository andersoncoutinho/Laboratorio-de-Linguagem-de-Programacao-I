#include <iostream>
#include "Circulo.h"
#include <iostream>

#define PI 3.14

using namespace std;

Circulo::Circulo(int tipo):FiguraGeometrica(tipo) {
    this->nome = "Círculo";
}

float Circulo::calcularArea() {
    return PI*(this->raio * this->raio);
}

void Circulo::lerAtributosArea() {
    cin >> this->raio;
    getchar();
}