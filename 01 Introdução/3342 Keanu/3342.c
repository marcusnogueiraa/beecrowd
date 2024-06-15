# include <stdio.h>

int main(){
  int n;
  scanf("%d", &n);
  n = n * n;
  printf("%d casas brancas e %d casas pretas\n", n / 2 + (n % 2), n / 2);
}

// https://www.beecrowd.com.br/judge/pt/problems/view/3342
// Ranking 00276º, Time 0.000, Submiss Date 12/04/2023 13:24:50 (C99)