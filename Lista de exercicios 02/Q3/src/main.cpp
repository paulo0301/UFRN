/**
 * @author Paulo Daniel Carvalho de Souza (20220041616)
 * @brief Programa para calcular o N-ésimo termo da sequência de tribonacci
 * @since 29/04/2023
 * @date 29/04/2023
 */
#include <iostream>
#include "..\include\class\Turma.h"

using namespace std;

int main(){
  int capacidade = 15;
  int vagas = 5;

  Aluno* alunos = new Aluno[vagas]{
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