#include <stdio.h>

int main()
{
  int tam;
  scanf("%d", &tam);
  int nums[tam];
  for (int i = 0; i < tam; i++)
  {
    scanf("%d", &nums[i]);
  }

  int menor_v = nums[0];
  int menor_i = 0;

  for (int i = 0; i < tam; i++)
  {
    if (nums[i] < menor_v)
    {
      menor_v = nums[i];
      menor_i = i;
    }
  }

  printf("Menor valor: %d\nPosicao: %d\n", menor_v, menor_i);
}

// https://www.beecrowd.com.br/judge/pt/problems/view/1180
// Ranking 22307º, Time 0.000, Submiss Date 01/04/2023 15:27:49 (C99)