#include "..\..\include\class\Aluno.h"

//Contrutores

Aluno::Aluno(){
  matricula = -1;
  nome = "";
  nota1 = 0;
  nota2 = 0;
  nota3 = 0;
}

Aluno::Aluno(int matricula, string nome, float n1, float n2, float n3){
  this->matricula = matricula;
  this->nome = nome;
  nota1 = n1;
  nota2 = n2;
  nota3 = n3;
}

Aluno::Aluno(Aluno &a){
  matricula = a.getMatricula();
  nome = a.getNome();
  nota1 = a.getNota1();
  nota2 = a.getNota2();
  nota3 = a.getNota3();
}

// Destrutor
Aluno::~Aluno(){
}

//Funções
float Aluno::calculaMedia(){
  float media = (nota1 + nota2 + nota3)/3;
  return media;
}

//Matricula

int Aluno::getMatricula(){
  return matricula;
}
void Aluno::setMatricula(int matricula){
  this->matricula = matricula; 
}

//Nome

string Aluno::getNome(){
  return nome;
}
void Aluno::setNome(string nome){
  this->nome = nome; 
}

//Notas

float Aluno::getNota1(){
  return nota1;
}
float Aluno::getNota2(){
  return nota2;
}
float Aluno::getNota3(){
  return nota3;
}

void Aluno::setNota1(float n1){
  this->nota1 = n1; 
}
void Aluno::setNota2(float n2){
  this->nota2 = n2; 
}
void Aluno::setNota3(float n3){
  this->nota3 = n3; 
}