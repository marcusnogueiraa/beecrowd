# include <stdio.h>

int main(){
  int n, resposta;
  scanf("%d", &n);
  for (int i = 0; i < n; i++){
    scanf("%d", &resposta);
    printf("resposta %d: %d\n", i+1, resposta);
  }
}

// https://www.beecrowd.com.br/judge/pt/problems/view/3302
// Ranking 00368º, Time 0.000, Submiss Date 11/04/2023 11:26:14 (C99)