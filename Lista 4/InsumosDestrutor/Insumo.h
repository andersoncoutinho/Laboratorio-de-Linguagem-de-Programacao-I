#ifndef INSUMO_H
#define INSUMO_H

#include<string>

#define VACINA 0
#define MEDICAMENTO 1
#define EPI 2

class Insumo {
	public:
		Insumo();
		Insumo(std::string nome, int quantidade, double valorUnitario, std::string dtVencimento, std::string nomeFabricante);
		virtual ~Insumo();
	protected:
		std::string nome;
        int quantidade;
        double valorUnitario;
        std::string dtVencimento;
        std::string nomeFabricante;
        int tipoInsumo;


};

#endif