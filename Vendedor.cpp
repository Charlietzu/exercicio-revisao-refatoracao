#include <string>
#include "Vendedor.hpp"

using namespace std;	  

Vendedor::Vendedor(string nome, double salarioHora, double quotaMensalVendas): Empregado(nome, salarioHora){
	this->setQuotaMensalVendas(quotaMensalVendas);
}

double Vendedor::quotaTotalAnual() {
	return this->getQuotaMensalVendas() * 12;
}

void Vendedor::imprimeVendedor(double valor){
	cout << "Nome: " << this->getNome() << endl;
	cout << "Salario Mes: " << this->pagamentoMes(valor) << endl;  
	cout << "Quota vendas: " << this->quotaTotalAnual() << endl; 
	cout << endl; 
}

void Vendedor::setQuotaMensalVendas(double quotaMensalVendas){
	this->quotaMensalVendas = quotaMensalVendas;
}

double Vendedor::getQuotaMensalVendas(){
	return this->quotaMensalVendas;
}
	

