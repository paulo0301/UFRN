#include "Aluno.h"
#include <iomanip>

/**
 * @brief Classe Turma
 * 
 */
class Turma{
  private:
    int capacidade;
    int vagas;
    Aluno* alunos;
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