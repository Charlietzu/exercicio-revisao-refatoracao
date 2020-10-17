#include <string>
#include "Empregado.hpp"

using namespace std;

Empregado::Empregado(string nome, double salarioHora){
  this->setNome(nome);
  this->setSalarioHora(salarioHora);
}


double Empregado::pagamentoMes(double horasTrabalhadas){
  double t = horasTrabalhadas;
  //Cálculo de hora extra (+50% se horasTrabalhadas > 8)
  if (horasTrabalhadas > 8) {
    double x = horasTrabalhadas - 8;
    t += x / 2;
  }
  return t * this->getSalarioHora();
}

double Empregado::getSalarioHora(){
  return this->salarioHora;
}

void Empregado::setSalarioHora(double salario){
  this->salarioHora = salario;
}

void Empregado::setNome(string nome){
  this->nome = nome;
}

string Empregado::getNome(){
  return this->nome;
}

