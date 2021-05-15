#include "Apartamento.h"  
#include <iostream>

using namespace std;

Apartamento::Apartamento(int tipo) : Imovel() {
	this->nome = "Apartamento";
}

float Apartamento::exibeAtributos() {
    cout << this->nome << " para " << this->tipoDeTransacao << ". "
        << this->area << "m2 de área, "
        << this->quartos << " quartos, "
        << this->andar << " andar, "
        << this->valorCondominio << " de condomínio, "
        << this->vagasGaragem << " vaga(s) de garagem. "
        << "R$ " << this->valor << "." << endl;
        return 0;
}

void Apartamento::lerAtributos() {
    cin >> this->valor;
    getline(cin.ignore(), this->tipoDeTransacao);
    cin >> this->area;
    cin >> this->quartos;
    cin >> this->andar;
    cin >> this->valorCondominio;
    cin >> this->vagasGaragem;
    getchar();
}
	
Apartamento::~Apartamento() {
	
}