#include "Invoice.h"

double Invoice::getInvoiceAmount() {
    return (qtdComprada * preco);
}