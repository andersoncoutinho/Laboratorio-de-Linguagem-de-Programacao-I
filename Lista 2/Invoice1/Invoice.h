#ifndef INVOICE_H
#define INVOICE_H

#include <iostream>

class Invoice {

    public:
        int numero;
        std::string descricao;
        int qtdComprada;
        double preco;
        double getInvoiceAmount();
};

#endif