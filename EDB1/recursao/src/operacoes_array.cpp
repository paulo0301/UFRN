#include "../include/operacoes_array.h"

using namespace std;

int soma(int array[], int tamanho){
  if(tamanho == 0)
    return 0;
  if(tamanho == 1)
    return array[0];
  return array[tamanho - 1] + soma(array, tamanho - 1);
}

int encontrarMin(int x, int y){
  if(x < y) return x;
  return y;
}

int min(int array[], int primeiro, int ultimo){
  if(primeiro == ultimo)
    return array[primeiro];

  int meio = (primeiro + ultimo) / 2;
  int resultado1 = min(array, primeiro, meio);
  int resultado2 = min(array, meio+1, ultimo);

  return encontrarMin(resultado1, resultado2);
}