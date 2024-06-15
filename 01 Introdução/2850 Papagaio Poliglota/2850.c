#include <stdio.h>
#include <string.h>

int main()
{
  char levantou[20];
  while (fgets(levantou, 20, stdin) != EOF)
  {
    levantou[strcspn(levantou, "\n")] = '\0';

    if (strcmp(levantou, "esquerda") == 0)
    {
      printf("ingles\n");
    }
    else if (strcmp(levantou, "direita") == 0)
    {
      printf("frances\n");
    }
    else if (strcmp(levantou, "nenhuma") == 0)
    {
      printf("portugues\n");
    }
    else
    {
      printf("caiu\n");
    }
  }
}

// https://www.beecrowd.com.br/judge/pt/problems/view/2850
// Ranking 00534º, Time 0.000, Submiss Date 03/04/2023 01:30:20 (C99)