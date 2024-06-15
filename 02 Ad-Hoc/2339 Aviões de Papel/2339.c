#include <stdio.h>

int main(){
  int C, P, F;
  scanf("%d %d %d", &C, &P, &F);
  if (C * F > P){
    printf("S\n");
  } else{
    printf("N\n");
  }
}

// https://www.beecrowd.com.br/judge/pt/problems/view/2339
// Ranking 00712º, Time 0.000, Submiss Date 06/04/2023 10:38:33 (C99)