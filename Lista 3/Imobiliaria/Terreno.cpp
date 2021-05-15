#include "Terreno.h"  
#include <iostream>

using namespace std;

Terreno::Terreno(int tipo) : Imovel() {
    this->nome = "Terreno";
}

float Terreno::exibeAtributos() {

    cout << this->nome << " pra " << this->tipoDeTransacao << ". "
        << this->area << "m2 de área de terreno. "
        << "R$ " << this->valor << "." << endl;
    return 0;

}

void Terreno::lerAtributos() {
    cin >> this->valor;
    getline(cin.ignore(), this->tipoDeTransacao);
    cin >> this->area;
    getchar();
}
	
Terreno::~Terreno() {
	
}