#include "Quadrado.h"
#include <iostream>

using namespace std;

Quadrado::Quadrado(int tipo):FiguraGeometrica(tipo) {
    this->nome = "Quadrado";
}

float Quadrado::calcularArea() {
    return (this->lado * this->lado);
}

void Quadrado::lerAtributosArea() {
    cin >> this->lado;
    getchar();
}