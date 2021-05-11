#ifndef RETANGULO_H
#define RETANGULO_H

#include "FiguraGeometrica.h"

class Retangulo: public FiguraGeometrica {
    public: 
        Retangulo(int);
        float calcularArea();
        void lerAtributosArea();
    private: 
        float largura;
        float comprimento;
};

#endif