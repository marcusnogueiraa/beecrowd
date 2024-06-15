# include <stdio.h>
# include <string.h>

int main(){
  char palavra[20];
  scanf("%s", palavra);
  if (strlen(palavra) >= 10){
    printf("palavrao\n");
  } else {
    printf("palavrinha\n");
  }
}

// https://www.beecrowd.com.br/judge/pt/problems/view/3303
// Ranking 00454º, Time 0.000, Submiss Date 12/04/2023 10:37:20 (C99)