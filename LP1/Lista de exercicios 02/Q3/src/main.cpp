/**
 * @file main.cpp
 * @author  Paulo Daniel Carvalho de Souza (20220041616)
 * @brief Arquivo que contém a função principal do programa
 * @date 2023-04-29
 */
#include <iostream>
#include "..\include\class\Turma.h"

using namespace std;

/**
 * @brief Função principal do programa
 * @return 0 caso a execução seja bem sucedida
 */
int main(){
  int capacidade = 15; /*< Variável que representa a capacidade da turma */
  int vagas = 5;  /*< Variável que representa o número de vagas na turma */

  Aluno* alunos = new Aluno[vagas]{/**< Vetor dinâmico de alunos com informações pré-definidas */
    {1, "Paulo", 7, 7, 7},
    {2, "Daniel", 7.7, 8.6, 6},
    {3, "Pedro", 6, 9.5, 7},
    {4, "Matheus", 3.5, 4, 5},
    {5, "Henrique", 10, 9, 9.5}
  };


  Turma turma(capacidade);
  turma.setAlunos(alunos);
  turma.setVagas(vagas);
  turma.ordenaCampo("nome");
  turma.imprimeAlunos();
  

  return 0;
}