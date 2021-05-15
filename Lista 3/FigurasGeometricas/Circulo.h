#ifndef CIRCULO_H
#define CIRCULO_H

#include "FiguraGeometrica.h"

class Circulo : public FiguraGeometrica{
    public:
        Circulo(int);
        float calcularArea();
        void lerAtributosArea();
    private:
        float raio;
};

#endif