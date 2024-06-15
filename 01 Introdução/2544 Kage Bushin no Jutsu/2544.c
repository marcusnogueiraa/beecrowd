#include <stdio.h>
#include <math.h>

int num_jutsu(int n)
{
  if (n == 1)
  {
    return 0;
  }
  for (int i = 0; i <= n / 2 + 1; i++)
  {
    if (pow(2, i) == n)
    {
      return i;
    }
  }
}

int main()
{
  int num_clones;
  while (scanf("%d", &num_clones) != EOF)
  {
    printf("%d\n", num_jutsu(num_clones));
  }
}

// https://www.beecrowd.com.br/judge/pt/problems/view/2544
// Ranking 00815º, Time 0.000, Submiss Date 03/04/2023 00:38:39 (C99)