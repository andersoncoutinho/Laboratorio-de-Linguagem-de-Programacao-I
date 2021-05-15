#ifndef TRIANGULO_H
#define TRIANGULO_H

#include "FiguraGeometrica.h"

class Triangulo: public FiguraGeometrica {
    public:
        Triangulo(int);
        float calcularArea();
        void lerAtributosArea();
    private:
        float base;
        float altura;
};

#endif