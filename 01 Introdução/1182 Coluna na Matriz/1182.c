#include <stdio.h>

int main()
{
  float matriz[12][12];
  int coluna;
  char op;

  scanf("%d", &coluna);
  scanf(" %c", &op);
  for (int i = 0; i < 12; i++)
  {
    for (int j = 0; j < 12; j++)
    {
      scanf("%f", &matriz[i][j]);
    }
  }

  float soma_total = 0;
  for (int i = 0; i < 12; i++)
  {
    soma_total += matriz[i][coluna];
  }

  if (op == 'S')
  {
    printf("%.1f\n", soma_total);
  }
  else
  {
    printf("%.1f\n", soma_total / 12);
  }
}

// https://www.beecrowd.com.br/judge/pt/problems/view/1182
// Ranking 16312º, Time 0.000, Submiss Date 01/04/2023 16:02:15 (C99)