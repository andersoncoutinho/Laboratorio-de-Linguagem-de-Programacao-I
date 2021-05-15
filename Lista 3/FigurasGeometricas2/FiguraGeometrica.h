#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H

#define INDEFINIDO 0
#define QUADRADO 1
#define RETANGULO 2
#define TRIANGULO 3
#define CIRCULO 4
#include <string>

class FiguraGeometrica {
    public:
        FiguraGeometrica();
        FiguraGeometrica(int);
        virtual float calcularArea() = 0;
        virtual void lerAtributosArea() = 0;
        virtual std::string getNome();
    protected:
        std::string nome;
        int tipo;
};

#endif