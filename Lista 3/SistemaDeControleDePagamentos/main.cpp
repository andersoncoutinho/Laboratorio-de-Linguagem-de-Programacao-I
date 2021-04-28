#include "ControleDePagamentos.h"
#include <iostream>

using namespace std;

int main(void) {

    ControleDePagamentos controle;
    int n;

    cin >> n;
    getchar();

    for(int i = 0; i < n; i++) {
        string nome;
        float valor;

        Pagamento pagamento;

        cin >> valor;
        getchar();
        getline(cin, nome);

        pagamento.setNomeDoFuncionario(nome);
        pagamento.setValorPagamento(valor);

        controle.setPagamento(pagamento, i);   
    }

    string nome;
    getline(cin, nome);

    int pos = controle.getIndexFuncionario(nome);
    
    if(pos != -1) {
        cout << controle.getPagamento(pos).getNomeDoFuncionario() << ": R$ "
            << controle.getPagamento(pos).getValorPagamento() << endl;
    } else {
        cout << nome << " não encontrado(a)." << endl;
    }
    
    cout << "Total: R$ " << controle.calculaTotalDePagamentos() << endl; 

    return 0;
}