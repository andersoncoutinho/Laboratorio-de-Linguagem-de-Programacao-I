#ifndef CONTROLEDEPAGAMENTOS_H
#define CONTROLEDEPAGAMENTOS_H
#define QTD_PAGAMENTOS 1000

#include "Pagamento.h"

class ControleDePagamentos {
    public:
        void setPagamento(Pagamento p, int index);
        Pagamento getPagamento(int pos);
        float calculaTotalDePagamentos();
        int getIndexFuncionario(std::string nomeFuncionario);

    private:
        Pagamento pagamentos[QTD_PAGAMENTOS];
};

#endif