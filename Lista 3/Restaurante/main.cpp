#include <iostream>
#include "Restaurante.h"

using namespace std;

int main(void) {

    Restaurante restaurante;
    string descricao;
    int numero, qtd, mesa;
    float preco;

    while(1) {
        cin >> numero;
        getchar();
        if(numero < 0) {
            break;
        }

        
        getline(cin, descricao);
        cin >> qtd;
        getchar();
        cin >> preco;
        getchar();
        cin >> mesa;
        getchar();

        restaurante.adicionarPedido(Pedido(numero, descricao, qtd, preco), mesa);
    }

    for(int i = 0; i < QTD_MAX; i++) {
        if(restaurante.getMesa(i).calculaTotal() > 0) {
            cout << "Mesa " << i+1 << endl;
            restaurante.getMesa(i).exibeConta();
            cout << "Total: R$ " << restaurante.getMesa(i).calculaTotal() << endl << endl; 
        }
    }

    cout << "Total Restaurante: R$ " << restaurante.calculaTotalRestaurante() << endl;

    return 0;
}