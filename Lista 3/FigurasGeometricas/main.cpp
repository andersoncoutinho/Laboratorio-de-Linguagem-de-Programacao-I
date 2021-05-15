#include <iostream>
#include "FiguraGeometrica.h"
#include "Quadrado.h"
#include "Retangulo.h"
#include "Triangulo.h"
#include "Circulo.h"

using namespace std;

int main(void) {
    
    while(true) {
        int tipo;
        cin >> tipo;
        getchar();
        if(tipo == INDEFINIDO) {
            break;
        }

        Quadrado *quadrado;
        Triangulo *triangulo;
        Circulo *circulo;
        Retangulo *retangulo;

        switch(tipo) {
            case QUADRADO:
                quadrado = new Quadrado(tipo);
                quadrado->lerAtributosArea();
                cout << quadrado->getNome() << " de área " << quadrado->calcularArea() << endl;
                delete quadrado;
                break;
            case RETANGULO:
                retangulo = new Retangulo(tipo);
                retangulo->lerAtributosArea();
                cout << retangulo->getNome() << " de área " << retangulo->calcularArea() << endl;
                delete retangulo;
                break;
            case CIRCULO:
                circulo = new Circulo(tipo);
                circulo->lerAtributosArea();
                cout << circulo->getNome() << " de área " << circulo->calcularArea() << endl;
                delete circulo;
                break;
            case TRIANGULO:
                triangulo = new Triangulo(tipo);
                triangulo->lerAtributosArea();
                cout << triangulo->getNome() << " de área " << triangulo->calcularArea() << endl;
                delete triangulo;
                break;
        }
    }

    return 0;
}