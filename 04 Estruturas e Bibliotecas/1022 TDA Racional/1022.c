#include <stdio.h>

typedef struct
{
  int num;
  int den;
} fracao;

int mdc(int num1, int num2)
{
  if (num2 == 0)
    return num1;
  return mdc(num2, num1 % num2);
}

void calculate(fracao frac1, fracao frac2, char op)
{
  if (op == '+')
  {
    int num = (frac1.num * frac2.den + frac2.num * frac1.den);
    int den = (frac1.den * frac2.den);
    int num_mdc = mdc(num, den);
    if (0 > num_mdc)
    {
      num_mdc *= -1;
    }
    printf("%d/%d = %d/%d\n", num, den, num / num_mdc, den / num_mdc);
  }
  else if (op == '-')
  {
    int num = (frac1.num * frac2.den - frac2.num * frac1.den);
    int den = (frac1.den * frac2.den);
    int num_mdc = mdc(num, den);
    if (0 > num_mdc)
    {
      num_mdc *= -1;
    }
    printf("%d/%d = %d/%d\n", num, den, num / num_mdc, den / num_mdc);
  }
  else if (op == '*')
  {
    int num = (frac1.num * frac2.num);
    int den = (frac1.den * frac2.den);
    int num_mdc = mdc(num, den);
    if (0 > num_mdc)
    {
      num_mdc *= -1;
    }
    printf("%d/%d = %d/%d\n", num, den, num / num_mdc, den / num_mdc);
  }
  else if (op == '/')
  {
    int num = (frac1.num * frac2.den);
    int den = (frac1.den * frac2.num);
    int num_mdc = mdc(num, den);
    if (0 > num_mdc)
    {
      num_mdc *= -1;
    }
    printf("%d/%d = %d/%d\n", num, den, num / num_mdc, den / num_mdc);
  }
  return;
}

int main()
{
  int cases;
  char op;
  fracao fracao1, fracao2;
  scanf("%d", &cases);
  for (int i = 0; i < cases; i++)
  {
    scanf("%d / %d %c %d / %d", &fracao1.num, &fracao1.den, &op, &fracao2.num, &fracao2.den);
    calculate(fracao1, fracao2, op);
  }

  return 0;
}

// https://www.beecrowd.com.br/judge/pt/problems/view/1022
// Ranking 00384º, Time 0.000, Submiss Date 01/04/2023 13:42:47 (C99)