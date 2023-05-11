#include <string>
#include <iostream>

using namespace std;

class Funcionario{
  private:
    string nome;
    double salario;
  public:
    Funcionario();
    Funcionario(string nome, double salario);
    string getNome();
    double getSalario();
    void aumentarSalario(int percAumento);
  
    void imprimirTresMaioresSalarios(Funcionario* lista, int tamanho);
    void imprimirTresMenoresSalarios(Funcionario* lista, int tamanho);

    Funcionario& operator++();
    Funcionario operator++(int);
    friend ostream &operator<<(ostream &, Funcionario &);
};