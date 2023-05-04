#include "../include/busca.h"

int bbin(string array[], string chave, int inicio, int fim){
  if(inicio > fim)
    return -1;  

  int meio = (inicio + fim)/2;
  
  if(chave < array[meio]){
    return bbin(array, chave, inicio, meio - 1);
  }
  else if(chave > array[meio]){
    return bbin(array, chave, meio + 1, fim);
  }
  else
    return meio;
}