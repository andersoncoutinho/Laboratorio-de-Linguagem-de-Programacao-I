#ifndef TRABALHADORPORHORA_H
#define TRABALHADORPORHORA_H

#include "Trabalhador.h"

class TrabalhadorPorHora: public Trabalhador {
	private:
		float valorDaHora;
	public:
		float calcularPagamentoSemanal(int horasSemanais);
		TrabalhadorPorHora(float);
		~TrabalhadorPorHora();
};
#endif