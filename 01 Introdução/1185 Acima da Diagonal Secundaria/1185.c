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
  for (int i = 0; i < 11; i++)
  {
    for (int j = 0; j < 11 - i; j++)
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

// https://www.beecrowd.com.br/judge/pt/problems/view/1185
// Ranking 11125º, Time 0.000, Submiss Date 01/04/2023 16:33:17 (C99)