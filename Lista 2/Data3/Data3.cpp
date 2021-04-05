#include <iostream>
#include "Data3.h"

using namespace std;

Data3::Data3(int dia, int mes, int ano) {

    if(mes < 1 || mes > 12) {
        cout << "Atributo mês Inválido" << endl;
        this->mes = 1;
    } else {
        this->mes = mes;
    }
    
    if(dia >= 1 && dia <= getDaysMonth(this->mes)) {
        this->dia = dia;
    } else {
        cout << "Atributo dia Inválido" << endl;
        this->dia = 1;
    }

    if(ano < 1) {
        cout << "Atributo ano Inválido" << endl;
        this->ano = 1;
    } else {
        this->ano = ano;
    }
}

int Data3::getDaysMonth(int mes) {
    switch (mes) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            return 31;
        case 4: case 6: case 9: case 11:
            return 30;
        case 2:
            return 28;
        default:
            return 0;
    }
}

void Data3::avancarDia() {
    if(this->dia < getDaysMonth(this->mes)) {
        this->dia++;
    } else {
        this->dia = 1;
        if(this->mes == 12) {
            this->mes = 1;
            this->ano++;
        } else {
            this->mes++;
        }
    }
}

string Data3::getDia(){
    if(this->dia < 10) {
        return "0" + to_string(dia);
    } else {
        return to_string(dia);
    }
}

string Data3::getMes() {
    if(this->mes < 10) {
        return "0" + to_string(mes);
    } else {
        return to_string(mes);
    }
}

string Data3::getAno() {
    return to_string(ano);
}

void Data3::setDia(int dia) {
    this->dia = dia;
}

void Data3::setMes(int mes) {
    this->mes = mes;
}

void Data3::setAno(int ano) {
    this->ano = ano;
}