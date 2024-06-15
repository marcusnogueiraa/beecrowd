# include <stdio.h>

int main(){
  int H, E, A, O, W, X;
  scanf("%d %d %d %d %d %d", &H, &E, &A, &O, &W, &X);
  if (H+E+A+X >= O+W) printf("Middle-earth is safe.\n");
  else printf("Sauron has returned.\n");
}

// https://www.beecrowd.com.br/judge/pt/problems/view/3147
// Ranking 00130º, Time 0.000, Submiss Date 16/04/2023 00:53:16 (C99)