/**
 * @file Aluno.h
 * @author Paulo Daniel Carvalho de Souza (20220041616)
 * @brief Definição da classe Aluno e seus métodos.
 */
#include <iostream>
#include <string>

using namespace std;

/**
 * @class Aluno
 * @brief Classe que representa um aluno e suas informações.
 */
class Aluno{
  private:
    int matricula; /*< Matrícula do aluno */
    string nome; /*< Nome do aluno */
    float nota1; /*< Primeira nota do aluno */
    float nota2; /*< Segunda nota do aluno */
    float nota3; /*< Terceira nota do aluno */
  public:
    int getMatricula();
    void setMatricula(int matricula);
    
    string getNome();
    void setNome(string nome);
    
    float getNota1();
    void setNota1(float n1);
    
    float getNota2();
    void setNota2(float n2);
    
    float getNota3();
    void setNota3(float n3);

    Aluno();
    Aluno(int matricula, string nome, float n1, float n2, float n3);
    Aluno(Aluno &a);

    ~Aluno();

    float calculaMedia();
};