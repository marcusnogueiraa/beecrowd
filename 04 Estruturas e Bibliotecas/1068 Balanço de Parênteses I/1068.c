#include <stdio.h>
#include <string.h>

int main()
{
  char expression[1000];
  while (scanf("%s", expression) != EOF)
  {
    int tam = strlen(expression);
    int as_correct = 1;
    int num_a = 0;
    int num_b = 0;
    for (int i = 0; i < tam; i++)
    {
      if (expression[i] == '(')
      {
        num_a++;
      }
      else if (expression[i] == ')')
      {
        num_b++;
      }
      else
      {
        continue;
      }
      if (num_b > num_a)
      {
        as_correct = 0;
      }
    }

    if ((as_correct == 0) || (num_a != num_b))
    {
      printf("incorrect\n");
    }
    else
    {
      printf("correct\n");
    }
  }
  return 0;
}

// https://www.beecrowd.com.br/judge/pt/problems/view/1022
// Ranking 01170º, Time 0.003, Submiss Date 01/04/2023 14:31:19 (C99)