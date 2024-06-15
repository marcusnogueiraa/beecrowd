# include <stdio.h>

int main(){
  int M, A, B;
  scanf("%d", &M);
  scanf("%d", &A);
  scanf("%d", &B);
  int C = M - (A+B);
  int maior = A;
  if (B > maior) maior = B;
  if (C > maior) maior = C;

  printf("%d\n", maior);
}

// https://www.beecrowd.com.br/judge/pt/problems/view/3057
// Ranking 00686º, Time 0.000, Submiss Date 16/04/2023 00:39:26 (C99)