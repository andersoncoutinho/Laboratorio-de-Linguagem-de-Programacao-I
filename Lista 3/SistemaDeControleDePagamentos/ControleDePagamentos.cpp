#include "ControleDePagamentos.h"
#include <string>

using namespace std;

void ControleDePagamentos::setPagamento(Pagamento p, int index) {
    this->pagamentos[index] = p;
}

Pagamento ControleDePagamentos::getPagamento(int pos) {
    return this->pagamentos[pos];
}

float ControleDePagamentos::calculaTotalDePagamentos() {
    float total = 0;
    for(Pagamento pagamento : pagamentos) {
        total += pagamento.getValorPagamento();
    }
    return total;
}

int ControleDePagamentos::getIndexFuncionario(std::string nomeFuncionario) {
    int i;
    for(i = 0; i < QTD_PAGAMENTOS; i++) {
        if(this->pagamentos[i].getNomeDoFuncionario().find(nomeFuncionario) != string::npos) {
            break;
        }
    }

    if(i < QTD_PAGAMENTOS) {
        return i;
    } else {
        return -1;
    }
}