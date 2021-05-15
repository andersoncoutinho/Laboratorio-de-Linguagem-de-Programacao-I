#include <iostream>
#include "Imovel.h"
#include "Casa.h"
#include "Apartamento.h"
#include "Terreno.h"

using namespace std;

int main(void) {

    int n;

    cin >> n;
    getchar();

    for(int i = 0; i < n; i++) {
        
        int tipo;
        cin >> tipo;
        getchar();

        if(tipo == CASA) {
            Casa casa(tipo);
            casa.lerAtributos();
            casa.exibeAtributos();
        } else if(tipo == APARTAMENTO) {
            Apartamento apartamento(tipo);
            apartamento.lerAtributos();
            apartamento.exibeAtributos();
        } else if(tipo == TERRENO) {
            Terreno terreno(tipo);
            terreno.lerAtributos();
            terreno.exibeAtributos();
        }
    }

    return 0;
}