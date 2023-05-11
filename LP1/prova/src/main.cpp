/**
 * @author Paulo Daniel Carvalho de Souza (20220041616)
 */

#include <iostream>
#include "../include/Funcionario.h"

void mostrarMenu();

int main(){
  int qtdFuncionarios = 0;
  int tamanho = 1;
  bool encerrarPrograma = false;
  int opcao = 0;

  Funcionario* lista = new Funcionario[tamanho];


  while(!encerrarPrograma){
    mostrarMenu();
    cin >> opcao;

    if(opcao == 1){
      if(qtdFuncionarios == 0){
        cout << "Nao existe funcionario cadastrado.\n";
        continue;
      }
      for(int i = 0; i < qtdFuncionarios; i++){
        cout << lista[i];
      }
    }

    if(opcao == 2){
      string nome;
      double salario;

      cout << "Digite o nome do funcionario: ";
      cin >> nome;

      cout << "Digite o salario do funcionario: ";
      cin >> salario;

      if(qtdFuncionarios == tamanho){
        Funcionario* tempLista = new Funcionario[tamanho+1];
        for(int i = 0; i < tamanho; i++){
          tempLista[i] = lista[i];
        }
        delete[] lista;
        lista = tempLista;
        tamanho++;
      }
      
      lista[qtdFuncionarios] = Funcionario(nome, salario);
      qtdFuncionarios++;
    }

    if(opcao == 3){
      cout << "Os tres maiores salarios: " << endl;
      lista[0].imprimirTresMaioresSalarios(lista, qtdFuncionarios);
    }
    if(opcao == 4){
      cout << "Os tres menores salarios: " << endl;
      lista[0].imprimirTresMenoresSalarios(lista, qtdFuncionarios);
    }
    if(opcao == 5){
      int n = 0;
      if(qtdFuncionarios == 0){
        cout << "Nao existe funcionario cadastrado.\n";
        continue;
      }
      
      for(int i = 0; i < qtdFuncionarios; i++){
        cout << i+1 << ": " << endl;
        cout << lista[i];
      }
      cout << "Digite o numero do funcionario que deseja aumentar o salario: ";
      cin >> n;

      if(n <= qtdFuncionarios && n > 0){
        int perc;
        cout << "Digite a porcentagem de aumento: ";
        cin >> perc;
        if(perc > 0 && perc <= 100)
          lista[n-1].aumentarSalario(perc);
        else
          cout << "Percentual invalido";
      }
      else{
        cout << "O numero digitado nao corresponde a nenhum funcionario\n";
      }
    }
    if(opcao == 6)
      encerrarPrograma = true;
  }


  return 0;
}

void mostrarMenu(){
  cout << "-----------------------MENU-----------------------------\n";
  cout << "1 - Exibir a lista de funcionarios cadastrados" << endl;
  cout << "2 - Inserir novo funcionario" << endl;
  cout << "3 - Exibir os tres funcionarios com os maiores salarios" << endl;
  cout << "4 - Exibir os tres funcionarios com os menores salarios" << endl;
  cout << "5 - Aumento salarial" << endl;
  cout << "6 - Encerrar programa" << endl;
  cout << "--------------------------------------------------------\n";
}