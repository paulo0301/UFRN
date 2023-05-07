/**
 * @file Aluno.cpp
 * @author Paulo Daniel Carvalho de Souza (20220041616)
 * @brief Arquivo que contém a definição da classe Aluno
 */

#include "..\..\include\class\Aluno.h"


/**
 * @brief Construtor padrão da classe Aluno
 */
Aluno::Aluno(){
  matricula = -1;
  nome = "";
  nota1 = 0;
  nota2 = 0;
  nota3 = 0;
}

/**
 * @brief Construtor da classe Aluno com parâmetros
 * @param matricula Matrícula do aluno
 * @param nome Nome do aluno
 * @param n1 Primeira nota do aluno
 * @param n2 Segunda nota do aluno
 * @param n3 Terceira nota do aluno
 */
Aluno::Aluno(int matricula, string nome, float n1, float n2, float n3){
  this->matricula = matricula;
  this->nome = nome;
  nota1 = n1;
  nota2 = n2;
  nota3 = n3;
}

/**
 * @brief Construtor de cópia da classe Aluno
 * @param a Objeto da classe Aluno a ser copiado
 */
Aluno::Aluno(Aluno &a){
  matricula = a.getMatricula();
  nome = a.getNome();
  nota1 = a.getNota1();
  nota2 = a.getNota2();
  nota3 = a.getNota3();
}

/**
 * @brief Destrutor da classe Aluno
 */
Aluno::~Aluno(){
}

/**
 * @brief Função que calcula a média das notas do aluno
 * @return A média das notas do aluno
 */
float Aluno::calculaMedia(){
  float media = (nota1 + nota2 + nota3)/3;
  return media;
}

/**
 * @brief Função que retorna a matrícula do aluno
 * @return A matrícula do aluno
 */
int Aluno::getMatricula(){
  return matricula;
}

/**
 * @brief Função que define a matrícula do aluno
 * @param matricula Matrícula do aluno
 */
void Aluno::setMatricula(int matricula){
  this->matricula = matricula; 
}

/**
 * @brief Função que retorna o nome do aluno
 * @return O nome do aluno
 */
string Aluno::getNome(){
  return nome;
}

/**
 * @brief Função que define o nome do aluno
 * @param nome Nome do aluno
 */
void Aluno::setNome(string nome){
  this->nome = nome; 
}

/**
 * @brief Função que retorna a primeira nota do aluno
 * @return A primeira nota do aluno
 */
float Aluno::getNota1(){
  return nota1;
}

/**
 * @brief Função que retorna a segunda nota do aluno
 * @return A segunda nota do aluno
 */
float Aluno::getNota2(){
  return nota2;
}

/**
 * @brief Função que retorna a terceira nota do aluno
 * @return A terceira nota do aluno
 */
float Aluno::getNota3(){
  return nota3;
}

/**
 * @brief Função que define a primeira nota do aluno
 * @param n1 Primeira nota do aluno
 */
void Aluno::setNota1(float n1){
  this->nota1 = n1; 
}

/**
 * @brief Função que define a segunda nota do aluno
 * @param n2 Segunda nota do aluno
 */
void Aluno::setNota2(float n2){
  this->nota2 = n2; 
}

/**
 * @brief Função que define a terceira nota do aluno
 * @param n3 Terceira nota do aluno
 */
void Aluno::setNota3(float n3){
  this->nota3 = n3; 
}