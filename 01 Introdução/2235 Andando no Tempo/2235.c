# include <stdio.h>

int main(){
  int A, B, C;
  scanf("%d %d %d", &A, &B, &C);
  if ((A == B) || (A == C) || (B == C) ){
    printf("S\n");
  }

  else if ((A+B == C) || (A+C == B) || (B+C == A)){
    printf("S\n");
  }

  else{
    printf("N\n");
  }
}

// https://www.beecrowd.com.br/judge/pt/problems/view/2235
// Ranking 02763º, Time 0.000, Submiss Date 12/04/2023 11:18:15 (C99)