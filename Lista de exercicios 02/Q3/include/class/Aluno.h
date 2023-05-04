#include <iostream>
#include <string>

using namespace std;

class Aluno{
  private:
    int matricula;
    string nome;
    float nota1;
    float nota2;
    float nota3;
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