/*
Crie uma classe chamada Data para representar uma data.
Essa classe deve conter três atributos: o dia, o mês, e o ano. Considere também: 

Um construtor padrão (sem parâmetros) que inicializa os três atributos privados com o valor 1.
Um método set() um get() para cada atributo; 
Um método printData() que deve exibir a data no formato: "<DIA> de <NomeDoMês> de <ANO>"
O programa deverá ler uma data (dia, mês, ano, nessa ordem),
e setar esse valores no objeto Data utilizando os métodos set.
Por fim, chame o método printData e exiba a data.
Caso o mês não seja conhecido exiba o nome dele como "Indefinido".
*/

#include <iostream>
#include "Data2.h"

using namespace std;

int main(void) {

    Data2 data;

    int dia, mes, ano;

    cin >> dia;
    cin >> mes;
    cin >> ano;

    data.setDia(dia);
    data.setMes(mes);
    data.setAno(ano);
    data.printData();

    return 0;
}