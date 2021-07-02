#ifndef LOCAL_H
#define LOCAL_H

#define QTD_INSUMOS 3

#include <string>
#include <vector>
#include "Insumo.h"

class Local {
	public:
		Local();
		~Local();
		void addInsumoArr(Insumo *in, int index);
		void addInsumoVec(Insumo *in);
	private:
		std::string nome;
		int tipo;
		Insumo *insumosArr[QTD_INSUMOS];
		std::vector<Insumo*> insumosVec;


};
#endif