#include <stdio.h>

void sort (int vetor[]) {
    int k, j, aux;

    for (k = 1; k < 4; k++) {
        for (j = 0; j < 3; j++) {
            if (vetor[j] > vetor[j + 1]) {
                aux = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }
    }
}

int main(){
  int vector[4];
  for(int i = 0; i < 4; i++){
    scanf("%d", &vector[i]);
  }

  sort(vector);

  if (vector[0] * vector[3] == vector[1] * vector[2]){
    printf("S\n");
  } else{
    printf("N\n");
  }
}

// https://www.beecrowd.com.br/judge/pt/problems/view/2428
// Ranking 00062º, Time 0.000, Submiss Date 06/04/2023 16:03:58 (C99)