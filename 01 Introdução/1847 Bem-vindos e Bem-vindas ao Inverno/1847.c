#include <stdio.h>

int main()
{
  int A, B, C;
  scanf("%d %d %d", &A, &B, &C);
  if (A > B && C >= B)
  {
    printf(":)\n");
  }
  else if (B > A && B >= C)
  {
    printf(":(\n");
  }
  else if (C > B && B > A && C - B < B - A)
  {
    printf(":(\n");
  }
  else if (C > B && B > A && C - B >= B - A)
  {
    printf(":)\n");
  }
  else if (A > B && B > C && B - C < A - B)
  {
    printf(":)\n");
  }
  else if (A > B && B > C && B - C >= A - B)
  {
    printf(":(\n");
  }
  else if (A == B && C > B)
  {
    printf(":)\n");
  }
  else
  {
    printf(":(\n");
  }
}

// https://www.beecrowd.com.br/judge/pt/problems/view/1847
// Ranking 04527º, Time 0.000, Submiss Date 01/04/2023 19:21:39 (C99)