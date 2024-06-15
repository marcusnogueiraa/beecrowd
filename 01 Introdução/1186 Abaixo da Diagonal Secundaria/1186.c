#include <stdio.h>

int main()
{
  float matriz[12][12];
  char op;

  scanf("%c", &op);
  for (int i = 0; i < 12; i++)
  {
    for (int j = 0; j < 12; j++)
    {
      scanf("%f", &matriz[i][j]);
    }
  }

  float soma_total = 0;
  for (int i = 1; i < 12; i++)
  {
    for (int j = 12 - i; j < 12; j++)
    {
      soma_total += matriz[i][j];
    }
  }

  if (op == 'S')
  {
    printf("%.1f\n", soma_total);
  }
  else
  {
    printf("%.1f\n", soma_total / 66);
  }
}

// https://www.beecrowd.com.br/judge/pt/problems/view/1186
// Ranking 10728º, Time 0.015, Submiss Date 01/04/2023 16:38:23 (C99)