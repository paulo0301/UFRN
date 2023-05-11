#include "../include/Funcionario.h"

Funcionario::Funcionario(){
  this->nome = "";
  this->salario = 0;
}

Funcionario::Funcionario(string nome, double salario){
  this->nome = nome;
  this->salario = salario;
}

string Funcionario::getNome(){
  return nome;
}

double Funcionario::getSalario(){
  return salario;
}

void Funcionario::aumentarSalario(int percAumento){
  if(percAumento >= 0 && percAumento <= 100){
    this->salario += this->salario * (percAumento/100.0);
  }
}

Funcionario& Funcionario::operator++(){
  this->salario += this->salario * (10.0/100.0);
  return *this;
}

Funcionario Funcionario::operator++(int){
  Funcionario tmp(this->nome, this->salario);

  this->salario += this->salario * (10.0/100.0);

  return tmp;
}

ostream &operator<<(ostream &out, Funcionario &f){
  out <<  "Nome: " << f.getNome() << endl << 
          "Salario: " << f.getSalario() << endl << 
          "- - - - - - - - - - - - - - - - - - - -" << endl;
  return out;
}

void Funcionario::imprimirTresMaioresSalarios(Funcionario* lista, int tamanho){
  for (int i = 0; i < tamanho; i++) {
    int maior = i;
    for (int j = i + 1; j < tamanho; j++) {
      if (lista[j].getSalario() > lista[maior].getSalario()) {
          maior = j;
      }
    }
    if (maior != i) {
      Funcionario temp = lista[i];
      lista[i] = lista[maior];
      lista[maior] = temp;
    }
  }

  for(int k = 0; k < 3; k++){
    cout << lista[k];
  }
}

void Funcionario::imprimirTresMenoresSalarios(Funcionario* lista, int tamanho){
  for (int i = 0; i < tamanho; i++) {
    int menor = i;
    for (int j = i + 1; j < tamanho; j++) {
      if (lista[j].getSalario() < lista[menor].getSalario()) {
          menor = j;
      }
    }
    if (menor != i) {
      Funcionario temp = lista[i];
      lista[i] = lista[menor];
      lista[menor] = temp;
    }
  }

  for(int k = 0; k < 3; k++){
    cout << lista[k];
  }
}