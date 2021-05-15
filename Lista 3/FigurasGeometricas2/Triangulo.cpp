#include "Triangulo.h"
#include <iostream>

using namespace std;

Triangulo::Triangulo(int tipo):FiguraGeometrica(tipo) {
    this->nome = "Triângulo";    
}

float Triangulo::calcularArea() {
    return ((this->base*this->altura)/2);
}

void Triangulo::lerAtributosArea() {
    cin >> this->altura;
    cin >> this->base;
    getchar();
}