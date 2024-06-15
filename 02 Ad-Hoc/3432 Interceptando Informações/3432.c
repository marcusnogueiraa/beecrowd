#include <stdio.h>

int main(){
  int inp;
  int falha = 0;
  for(int i = 0; i < 8; i++){
    scanf("%d", &inp);
    if (inp == 9){
      falha = 1;
      break;
    }
  }
  if (falha) printf("F\n");
  else printf("S\n");
}

// https://www.beecrowd.com.br/judge/pt/problems/view/3432
// Ranking 00006º, Time 0.000, Submiss Date 29/05/2023 03:36:01 (C99)