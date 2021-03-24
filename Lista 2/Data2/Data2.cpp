#include <iostream>
#include "Data2.h"

using namespace std;

Data2::Data2() {
    dia = mes = ano = 1;
}

void Data2::printData() {
    string nomeDoMes;

    switch (mes)
    {
        case 1:
            nomeDoMes = "Janeiro";
            break;
        case 2:
            nomeDoMes = "Fevereiro";
            break;
        case 3:
            nomeDoMes = "Março";
            break;
        case 4:
            nomeDoMes = "Abril";
            break;
        case 5:
            nomeDoMes = "Maio";
            break;
        case 6:
            nomeDoMes = "Junho";
            break;
        case 7:
            nomeDoMes = "Julho";
            break;
        case 8:
            nomeDoMes = "Agosto";
            break;
        case 9:
            nomeDoMes = "Setembro";
            break;
        case 10:
            nomeDoMes = "Outubro";
            break;
        case 11:
            nomeDoMes = "Novembro";
            break;
        case 12:
            nomeDoMes = "Dezembro";
            break;
        default:
            nomeDoMes = "Indefinido";
            break;
    }

    cout << dia << " de " << nomeDoMes << " de " << ano << endl;
}

void Data2::setDia(int d) {
    dia = d;
}
void Data2::setMes(int m) {
    mes = m;
}
void Data2::setAno(int a) {
    ano = a;
}

int Data2::getDia() {
    return dia;
}

int Data2::getMes() {
    return mes;
}

int Data2::getAno() {
    return ano;
}