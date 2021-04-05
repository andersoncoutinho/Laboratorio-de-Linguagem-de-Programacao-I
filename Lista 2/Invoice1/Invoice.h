#ifndef INVOICE_H
#define INVOICE_H

#include <iostream>

using namespace std;

class Invoice {

    public:
        int numero;
        string descricao;
        int qtdComprada;
        int preco;
        double getInvoiceAmount();
};

#endif