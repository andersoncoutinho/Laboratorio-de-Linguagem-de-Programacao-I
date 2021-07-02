#include <iostream>

#include "Insumo.h"
#include "Vacina.h"
#include "Medicamento.h"
#include "Epi.h"
#include "Local.h"

int main(void) {

    Local *local = new Local();
    Insumo *insumo1;
    Insumo *insumo2;

    std::string nome;
    int qtd;
    double valor;
    std::string dtVencimento;
    std::string nomeFabricante;
    
    std::string tipoV;
    int quantDoses;
    int intervalo;

    std::string dosagem;
    std::string administracao;
    std::string disponibilizacao;

    std::string descricao;

    std::string local2;

    for(int tipo = 0; tipo < QTD_INSUMOS; tipo++) {

        getline(std::cin, nome);
        std::cin >> qtd;
        std::cin >> valor;
        getchar();
        getline(std::cin, dtVencimento);
        getline(std::cin, nomeFabricante);
        getline(std::cin, local2);
        

        switch(tipo) {
            case VACINA:
                getline(std::cin, tipoV);
                std::cin >> quantDoses;
                std::cin >> intervalo;
                getchar();
                insumo1 = new Vacina(nome, qtd, valor, dtVencimento, nomeFabricante, tipoV, quantDoses, intervalo);
                insumo2 = new Vacina(nome, qtd, valor, dtVencimento, nomeFabricante, tipoV, quantDoses, intervalo);
                break;
            case MEDICAMENTO:
                getline(std::cin, dosagem);
                getline(std::cin, administracao);
                getline(std::cin, disponibilizacao);
                insumo1 = new Medicamento(nome, qtd, valor, dtVencimento, nomeFabricante, dosagem, administracao, disponibilizacao);
                insumo2 = new Medicamento(nome, qtd, valor, dtVencimento, nomeFabricante, dosagem, administracao, disponibilizacao);
                break;
            case EPI:
                getline(std::cin, tipoV);
                getline(std::cin, descricao);
                insumo1 = new Epi(nome, qtd, valor, dtVencimento, nomeFabricante, tipoV, descricao);
                insumo2 = new Epi(nome, qtd, valor, dtVencimento, nomeFabricante, tipoV, descricao);
                break;
        }

        local->addInsumoArr(insumo1, tipo);
        local->addInsumoVec(insumo2);

    }

    delete local;
    
    return 0;
}