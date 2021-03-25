#include <iostream>
#include "Data3.h"

using namespace std;

int main(void) {
    
    int dia, mes, ano;
    int avancos;

    cin >> dia;
    cin >> mes;
    cin >> ano;
    cin >> avancos;

    Data3 data(dia, mes, ano);

    while(avancos--) {
        data.avancarDia();
    }

    cout << data.getDia() << "/" << data.getMes() << "/" << data.getAno() << endl;


    return 0;
}