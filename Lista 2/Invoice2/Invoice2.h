#ifndef INVOICE2_H
#define INVOICE2_H

#include <string>

class Invoice2 {

    public:
        Invoice2(int, std::string, int, double);
        void print();
        double getInvoiceAmount();
        int getNumero();
        void setNumero(int);
        std::string getDescricao();
        void setDescricao(std::string);
        int getQtd();
        void setQtd(int);
        double getPreco();
        void setPreco(double);

    private:
        int numero;
        std::string descricao;
        int qtd;
        double preco;
};

#endif