# include <stdio.h>

int main(){
  int H, Z, L;
  scanf("%d %d %d", &H, &Z, &L);
  if ((H > Z && H < L) || (H > L && H < Z)) printf("huguinho\n");
  if ((L > Z && L < H) || (L > H && L < Z)) printf("luisinho\n");
  if ((Z > H && Z < L) || (Z > L && Z < H)) printf("zezinho\n");
}

// https://www.beecrowd.com.br/judge/pt/problems/view/3301
// Ranking 00352º, Time 0.000, Submiss Date 12/04/2023 12:55:44 (C99)