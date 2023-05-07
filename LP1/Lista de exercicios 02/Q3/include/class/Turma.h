/**
 * @file Turma.h
 * @author Paulo Daniel Carvalho de Souza (20220041616)
 * @brief Definição da classe Turma, responsável por armazenar um conjunto de alunos e suas notas.
 */
#include "Aluno.h"
#include <iomanip>

/**
 * @class Turma
 * @brief Classe responsável por armazenar um conjunto de alunos e suas notas. 
 */
class Turma{
  private:
    int capacidade;/*< Capacidade máxima da turma */
    int vagas;/*< Quantidade atual de alunos na turma */
    Aluno* alunos;/*< Ponteiro para um vetor de alunos */
  public:
    int getCapacidade();
    void setCapacidade(int capacidade);

    int getVagas();
    void setVagas(int vagas);

    Aluno* getAlunos();
    void setAlunos(Aluno *alunos);

    Turma(int capacidade);

    void imprimeAlunos();

    void ordenaCampo(string campo);
};