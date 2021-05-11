#include "TrabalhadorPorHora.h"  
	
TrabalhadorPorHora::TrabalhadorPorHora(float valorDaHora) {
    this->valorDaHora = valorDaHora;
}
	
TrabalhadorPorHora::~TrabalhadorPorHora()
{
	
}

float TrabalhadorPorHora::calcularPagamentoSemanal(int horasSemanais) {
    float pagamentoSemanal;
    if(horasSemanais <= 40) {
        pagamentoSemanal = (this->valorDaHora * horasSemanais);
    } else {
        pagamentoSemanal = ((this->valorDaHora * 40)
                            + ((this->valorDaHora*1.5) * (horasSemanais-40)));
    }
    this->salario = pagamentoSemanal * 4;
    return pagamentoSemanal;
}