# include <stdio.h>
# include <string.h>

int es_mala_suerte(char numero[]){
  if (1 >= strlen(numero)) return 0;
  else {
    for (int i = 1; i < strlen(numero); i++){
        if (numero[i] == '3' && numero[i-1] == '1') return 1;
    }
    return 0;
  }
}

int main(){
  char numero[20];
  scanf("%s", numero);
  if (es_mala_suerte(numero)){
    printf("%s es de Mala Suerte\n", numero);
  } else {
    printf("%s NO es de Mala Suerte\n", numero);    
  }
}

// https://www.beecrowd.com.br/judge/pt/problems/view/3299
// Ranking 00154º, Time 0.000, Submiss Date 12/04/2023 13:13:24 (C99)