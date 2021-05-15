#ifndef CONTROLEDEGASTOS_H
#define CONTROLEDEGASTOS_H

#include <string>
#include "Despesa.h"

class ControleDeGastos {

    public:
        void setDespesa(Despesa d, int pos);
        Despesa getDespesa(int pos);
        float calculaTotalDeDespesas();
        float calculaTotalDeDespesas(std::string tipo);
        bool existeDespesaDoTipo(std::string tipo);

    private:
        Despesa despesas[100];


};
 
#endif