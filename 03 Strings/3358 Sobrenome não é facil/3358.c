#include <stdio.h>
#include <string.h>

int eh_consoante(char letra){
  char vogais[] = {'a', 'e', 'i', 'o', 'u'};
  if (letra >= 'A' && letra <= 'Z') { 
    letra += 32;
  }
  for (int i = 0; i < 5; i++){
    if (vogais[i] == letra){
      return 0;
    }
  }
  return 1;
}

int is_hard(char nome[]){
  int tam = strlen(nome);
  for (int i = 0; i < tam - 2; i++){
    if (eh_consoante(nome[i]) && eh_consoante(nome[i+1]) && eh_consoante(nome[i+2])){
      return 1;
    }
  }
  return 0;
}

int main(){
  int n;
  char nome[42];
  scanf("%d", &n);
  for (int i = 0; i < n; i++){
    scanf("%s", nome);
    if (is_hard(nome)){
      printf("%s nao eh facil\n", nome);
    } else {
      printf("%s eh facil\n", nome);
    }
  }
}

// https://www.beecrowd.com.br/judge/pt/problems/view/3358
// Ranking 00177º, Time 0.000, Submiss Date 11/04/2023 11:10:14 (C99)