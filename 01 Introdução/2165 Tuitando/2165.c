#include <stdio.h>
#include <string.h>

int main()
{
  char nome[500];
  scanf("%[^\n]s", nome);
  if (140 >= strlen(nome))
  {
    printf("TWEET\n");
  }
  else
  {
    printf("MUTE\n");
  }
}

// https://www.beecrowd.com.br/judge/pt/problems/view/2165
// Ranking 02779º, Time 0.000, Submiss Date 01/04/2023 20:53:15 (C99)