#include "ControleDeGastos.h"

#include<iostream>
#include <string>

void ControleDeGastos::setDespesa(Despesa d, int pos) {
    this->despesas[pos] = d;
}

Despesa ControleDeGastos::getDespesa(int pos) {
    return this->despesas[pos];
}

float ControleDeGastos::calculaTotalDeDespesas() {
    float valor = 0;

    for(int i = 0; i < 100; i++) {
        valor += this->despesas[i].getValor();
    }

    return valor;
}

float ControleDeGastos::calculaTotalDeDespesas(std::string tipo) {
    float valor = 0;

    for(int i = 0; i < 100; i++) {
        if(this->despesas[i].getTipoDeGasto().find(tipo) != std::string::npos) {
            
            valor += this->despesas[i].getValor();

        }
    }

    return valor;
}

bool ControleDeGastos::existeDespesaDoTipo(std::string tipo) {

    for(int i = 0; i < 100; i++) {
        if(this->despesas[i].getTipoDeGasto().find(tipo) != std::string::npos) {
            
            return true;

        }
    }
    
    return false;
}

