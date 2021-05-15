#include "FiguraGeometrica.h"

FiguraGeometrica::FiguraGeometrica() {

}

FiguraGeometrica::FiguraGeometrica(int tipo) {
    this->tipo = tipo;
}

float FiguraGeometrica::calcularArea() {
    return 0;
}

void FiguraGeometrica::lerAtributosArea() {

}

std::string FiguraGeometrica::getNome() {
    return this->nome;
}