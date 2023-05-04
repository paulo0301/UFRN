#include "..\..\include\class\Turma.h"

Turma::Turma(int capacidade){
  this->capacidade = capacidade;

  alunos = new Aluno[this->capacidade];
}

// Capacidade
int Turma::getCapacidade(){
  return capacidade;
}
void Turma::setCapacidade(int capacidade){
  this->capacidade = capacidade;
}

// Vagas
int Turma::getVagas(){
  return vagas;
}
void Turma::setVagas(int vagas){
  this->vagas = vagas;
}

// Alunos
Aluno* Turma::getAlunos(){
  return alunos;
}
void Turma::setAlunos(Aluno *alunos){
  this->alunos = alunos;
}

//Funções

void Turma::imprimeAlunos(){
  for(int i = 0; i < vagas; i++){
    cout << "Matricula: " << alunos[i].getMatricula() << endl;
    cout << "Nome: " << alunos[i].getNome() << endl;
    cout << "Media: " << setprecision(1) << fixed << alunos[i].calculaMedia() << endl;
    cout << "----------------------" << endl;
  }
}

/**
 * @brief Função para ordenar os alunos com base no parâmetro campo
 * @details O algoritmo de ordenação usado foi o Selection Sort.
 * @param campo Recebe uma string com um desses valores: nome, matricula ou nota. A qual será usada como critério para ordenação.
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