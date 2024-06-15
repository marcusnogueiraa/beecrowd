#include <stdio.h>

int main()
{
  double matriz[12][12];
  char op;

  scanf("%c", &op);
  for (int i = 0; i < 12; i++)
  {
    for (int j = 0; j < 12; j++)
    {
      scanf("%lf", &matriz[i][j]);
    }
  }

  double soma_total = 0;
  for (int i = 0; i < 5; i++)
  {
    for (int j = 1 + i; j < 11 - i; j++)
    {
      soma_total += matriz[i][j];
    }
  }

  if (op == 'S')
  {
    printf("%.1lf\n", soma_total);
  }
  else if (op == 'M')
  {
    printf("%.1lf\n", soma_total / 30);
  }
}

// https://www.beecrowd.com.br/judge/pt/problems/view/1187
// Ranking 11076º, Time 0.000, Submiss Date 06/04/2023 11:47:03 (C99)