#include "Local.h"  

#include <iostream>
	
Local::Local() {
    nome = "";
    tipo = 0;
}

void Local::addInsumoArr(Insumo *in, int index) {
    insumosArr[index] = in;
}

void Local::addInsumoVec(Insumo *in) {
    insumosVec.push_back(in);
}
	
Local::~Local() {

    std::cout << "Deletando Local" << std::endl;
    
	for(int i = 0; i < QTD_INSUMOS; i++) {
        if(insumosArr[i] != NULL)
            delete insumosArr[i];
        
        insumosArr[i] = NULL;
    }

    for(int i = 0; i < insumosVec.size(); i++) {
        if(insumosVec[i] != NULL)
            delete insumosVec[i];
        
        insumosVec[i] = NULL;
    }
    insumosVec.clear();

}