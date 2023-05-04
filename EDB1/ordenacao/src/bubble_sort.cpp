#include "..\include\ordenar.h"

void ordenar(string array[], int tamanho) {
  bool trocou = true;
  int fim = tamanho;

  while (trocou) {
    trocou = false;
    for (int i = 0; i < fim-1; i++) {
      if (array[i] > array[i + 1]) {
        string aux = array[i];
        array[i] = array[i + 1];
        array[i + 1] = aux;
        trocou = true;
      }
    }
    fim--;
  }
}

/*void ordenar(string array[], int tamanho) {
  int n = tamanho;

  for(int j = 0; j < tamanho; j++) {
    for (int i = 0; i < n-j-1; i++) {
      if (array[i] > array[i + 1]) {
        string aux = array[i];
        array[i] = array[i + 1];
        array[i + 1] = aux;
      }
    }
  }
}*/