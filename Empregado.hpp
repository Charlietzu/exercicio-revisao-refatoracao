#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

using namespace std;

class Empregado {
	
  private:
    double salarioHora;
    string nome;

  public:
    Empregado(string nome, double salarioHora);
    double pagamentoMes(double horasTrabalhadas);
    void setSalarioHora(double salario);
    double getSalarioHora();
    void setNome(string nome);
    string getNome();
	
};

#endif