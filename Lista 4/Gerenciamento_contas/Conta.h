#ifndef CONTA_H
#define CONTA_H

#include <string>

class Conta {
	public:
		Conta();
		Conta(std::string nomeCliente, int numero);
		virtual void sacar(double);
		virtual void depositar(double);
		virtual double saldoTotalDisponivel();
		virtual void getInfo();
		void setNomeCliente(std::string);
		std::string getNomeCliente();
		void setNumero(int);
		int getNumero();
		void setSaldo(double);
		double getSaldo();
	protected:
		std::string nomeCliente;
		int numero;
		double saldo;
};
#endif