#include "../include/busca.h"

int bseq(string array[], int tamanho, string chave){
  
  for(int i = 0; i < tamanho; i++){
    if(chave == array[i])
      return i;
  }

  return -1;
}