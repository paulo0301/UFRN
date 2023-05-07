/**
 * @file Turma.cpp
 * @author Paulo Daniel Carvalho de Souza (20220041616)
 * @brief Arquivo que contém a definição da classe Turma
 */
#include "..\..\include\class\Turma.h"

/**
* @brief Construtor da classe Turma.
* @param capacidade Capacidade máxima da turma.
*/
Turma::Turma(int capacidade){
  this->capacidade = capacidade;

  alunos = new Aluno[this->capacidade];
}

/**
 * @brief Retorna a capacidade máxima da turma.
 * @return Capacidade máxima da turma.
 */
int Turma::getCapacidade(){
  return capacidade;
}

/**
 * @brief Define a capacidade máxima da turma.
 * @param capacidade Capacidade máxima da turma.
 */
void Turma::setCapacidade(int capacidade){
  this->capacidade = capacidade;
}

/**
 * @brief Retorna a quantidade atual de alunos na turma.
 * @return Quantidade atual de alunos na turma.
 */
int Turma::getVagas(){
  return vagas;
}

/**
 * @brief Define a quantidade atual de alunos na turma.
 * @param vagas Quantidade atual de alunos na turma.
 */
void Turma::setVagas(int vagas){
  this->vagas = vagas;
}

/**
 * @brief Retorna o vetor de alunos da turma.
 * @return Ponteiro para o vetor de alunos da turma.
 */
Aluno* Turma::getAlunos(){
  return alunos;
}

/**
 * @brief Define o vetor de alunos da turma.
 * @param alunos Ponteiro para o vetor de alunos da turma.
 */
void Turma::setAlunos(Aluno *alunos){
  this->alunos = alunos;
}

/**
 * @brief Imprime na tela as informações dos alunos da turma.
 */
void Turma::imprimeAlunos(){
  for(int i = 0; i < vagas; i++){
    cout << "Matricula: " << alunos[i].getMatricula() << endl;
    cout << "Nome: " << alunos[i].getNome() << endl;
    cout << "Media: " << setprecision(1) << fixed << alunos[i].calculaMedia() << endl;
    cout << "----------------------" << endl;
  }
}

/**
 * @brief Ordena o vetor de alunos da turma em ordem crescente do campo indicado.
 * @param campo Campo pelo qual será realizada a ordenação (matricula, nome ou nota).
 */
void Turma::ordenaCampo(string campo) {
  if(campo != "matricula" && campo != "nome" && campo != "nota"){
    cerr << "Insira um campo valido" << endl;
    exit(-1);
  }
  
  for (int i = 0; i < vagas; i++) {
    
    int min = i; 
    
    for (int j = i + 1; j < vagas; j++) {
      if(campo == "matricula")
        if (alunos[j].getMatricula() < alunos[min].getMatricula())
          min = j;
      
      if(campo == "nome")
        if (alunos[j].getNome() < alunos[min].getNome())
          min = j;
      
      if(campo == "nota")
        if (alunos[j].calculaMedia() < alunos[min].calculaMedia())
          min = j;
    }
    
    if (i != min) {
      Aluno aux = alunos[i];
      alunos[i]   = alunos[min];
      alunos[min] = aux;
    }
  }
}