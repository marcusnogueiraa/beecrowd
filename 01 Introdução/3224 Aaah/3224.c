# include <stdio.h>
# include <string.h>

int main(){
  char jon[1000];
  char medico[1000];
  scanf("%s", jon);
  scanf("%s", medico);
  if (strlen(medico) > strlen(jon)) printf("no\n");
  else printf("go\n");
}

// https://www.beecrowd.com.br/judge/pt/problems/view/3224
// Ranking 00115º, Time 0.000, Submiss Date 16/04/2023 12:07:24 (C99)