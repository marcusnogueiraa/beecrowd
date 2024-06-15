# include <stdio.h>

int main(){
  int N, tt = 0;
  int as_sqc = 0;
  scanf("%d", &N);
  char sqc[N];
  scanf(" %s", sqc);
  for (int i = 0; i < N; i++){
    if (sqc[i] == 'a' && as_sqc == 0){
      if (sqc[i+1] == 'a') tt++;
      as_sqc = 1;
    }
    else if (sqc[i] == 'a' && as_sqc == 1){
      tt++;
    }
    else as_sqc = 0;
  
  }
  
  printf("%d\n", tt);
}

// https://www.beecrowd.com.br/judge/pt/problems/view/3424
// Ranking 00001º, Time 0.000, Submiss Date 29/05/2023 07:03:22 (C99)