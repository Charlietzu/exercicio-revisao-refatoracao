#include <string>
#include "Engenheiro.hpp"

using namespace std;

Engenheiro::Engenheiro(string nome, double salarioHora, int projetos): Empregado(nome, salarioHora){
  this->setProjetos(projetos);
}

void Engenheiro::imprimeEngenheiro(double valor){
  cout << "Nome: " << this->getNome() << endl;
  cout << "Salario Mes: " << this->pagamentoMes(valor) << endl;  
  cout << "Projetos: " << this->getProjetos() << endl; 
  cout << endl; 
}

void Engenheiro::setProjetos(int projetos){
  this->projetos = projetos;
}

int Engenheiro::getProjetos(){
  return this->projetos;
}
