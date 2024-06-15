#include <stdio.h>
#include <string.h>

int main()
{
  char nome[500];
  scanf("%[^\n]s", nome);
  if (80 >= strlen(nome))
  {
    printf("YES\n");
  }
  else
  {
    printf("NO\n");
  }
}

// https://www.beecrowd.com.br/judge/pt/problems/view/2160
// Ranking 03295º, Time 0.000, Submiss Date 01/04/2023 20:23:22 (C99)