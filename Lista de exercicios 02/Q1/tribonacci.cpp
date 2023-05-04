/**
 * @author Paulo Daniel Carvalho de Souza (20220041616)
 * @brief Programa para calcular o N-ésimo termo da sequência de tribonacci
 * @since 29/04/2023
 * @date 29/04/2023
 */

#include <iostream>

using namespace std;


int tribonacci(int n){
  if(n <= 1)
    return 0;
  if(n == 2)
    return 1;
  int x = tribonacci(n - 1) + tribonacci(n - 2) + tribonacci(n - 3);
    return x;
}

int main(int argc, const char * argv[]){

  if(argc != 2)
    {
        cerr << "ERRO: É necessário informar um número N" << endl;
        exit(-1);
    }
  
  int n = atoi(argv[1]);

  cout << tribonacci(n) << endl;

  return 0;
}