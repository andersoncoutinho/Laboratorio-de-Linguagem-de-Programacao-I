#include <iostream>
#include "FiguraGeometrica.h"
#include "Quadrado.h"
#include "Triangulo.h"
#include "Retangulo.h"
#include "Circulo.h"

using namespace std;

int main(void) {

    FiguraGeometrica *figura;

    while(true) {

        int tipo;
        cin >> tipo;
        getchar();
        if(tipo == 0) {
            break;
        }

        switch(tipo) {
            case QUADRADO:
                figura =  new Quadrado(tipo);
                figura->lerAtributosArea();
                break;
            case TRIANGULO:
                figura = new Triangulo(tipo);
                figura->lerAtributosArea();
                break;
            case CIRCULO:
                figura = new Circulo(tipo);
                figura->lerAtributosArea();
                break;
            case RETANGULO:
                figura = new Retangulo(tipo);
                figura->lerAtributosArea();
                break;    
        }
        cout << figura->getNome() << " polimórfico de área " << figura->calcularArea() << endl;
        delete figura;
    }


    return 0;
}