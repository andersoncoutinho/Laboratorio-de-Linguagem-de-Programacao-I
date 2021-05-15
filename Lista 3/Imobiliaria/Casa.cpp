#include "Casa.h"  
#include <iostream>

using namespace std;

Casa::Casa(int):Imovel() {
	this->nome = "Casa";
}

float Casa::exibeAtributos() {
    cout << this->nome << " pra " << this->tipoDeTransacao << ". "
        << this->pavimentos << " pavimentos, "
        << this->quartos << " quartos, "
        << this->area << "m2 de área de terreno e "
        << this->areaConstruida << "m2 de área construída. "
        << "R$ " << this->valor << "." << endl;
        return 0;
}

void Casa::lerAtributos() {
    cin >> this->valor;
    getline(cin.ignore(), this->tipoDeTransacao);
    cin >> this->pavimentos;
    cin >> this->quartos;
    cin >> this->area;
    cin >> this->areaConstruida;
    getchar();
}
	
Casa::~Casa() {
	
}