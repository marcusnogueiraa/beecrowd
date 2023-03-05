#include <stdio.h>

int main()
{
  int hora1, min1, hora2, min2;
  scanf("%d %d %d %d", &hora1, &min1, &hora2, &min2);

  int horas = 0;
  int minutos = 0;

  if (hora1 == hora2 && min1 == min2)
  {
    horas = 24;
  }
  else if (hora1 == hora2)
  {
    if (min1 < min2)
    {
      minutos = min2 - min1;
    }
    else if (min1 > min2)
    {
      horas = 23;
      minutos = 60 - (min1 - min2);
    }
  }
  else if (hora1 < hora2)
  {
    if (min1 == min2)
    {
      horas = hora2 - hora1;
    }
    else
    {
      horas = hora2 - hora1 - 1;
      minutos = (60 - min1) + min2;
      if (minutos > 59)
      {
        minutos = minutos - 60;
        horas++;
      }
    }
  }
  else
  {
    if (min1 == min2)
    {
      horas = 24 - hora1 + hora2;
    }
    else
    {
      horas = 23 - hora1 + hora2;
      minutos = (60 - min1) + min2;
      if (minutos > 59)
      {
        minutos = minutos - 60;
        horas++;
      }
    }
  }

  printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horas, minutos);

  return 0;
}

// https://www.beecrowd.com.br/judge/pt/problems/view/1047
// Ranking 21009º, Time 0.000, Submiss Date 05/03/2023 03:32:11 (C99)