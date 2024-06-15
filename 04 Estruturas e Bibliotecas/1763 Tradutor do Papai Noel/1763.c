#include <stdio.h>
#include <string.h>

int indice_do_pais(char element[], char paises[][15]){
  for(int i = 0; i < 24; i++){
    if (strcmp(element, paises[i]) == 0){
      return i;
    }
  }
  return -1;
}

int main(){
  char paises[][15] = 
  {"brasil", "alemanha", "austria", "coreia",
  "espanha", "grecia", "estados-unidos", "inglaterra",
  "australia", "portugal", "suecia", "turquia",
  "argentina", "chile", "mexico", "antardida",
  "canada", "irlanda", "belgica", "italia",
  "libia", "siria", "marrocos", "japao" 
  };
  char *message[] = {
    "Feliz Natal!", "Frohliche Weihnachten!", "Frohe Weihnacht!",
    "Chuk Sung Tan!", "Feliz Navidad!", "Kala Christougena!",
    "Merry Christmas!", "Merry Christmas!", "Merry Christmas!",
    "Feliz Natal!", "God Jul!", "Mutlu Noeller", "Feliz Navidad!",
    "Feliz Navidad!", "Feliz Navidad!", "Merry Christmas!", "Merry Christmas!",
    "Nollaig Shona Dhuit!", "Zalig Kerstfeest!", "Buon Natale!", "Buon Natale!",
    "Milad Mubarak!", "Milad Mubarak!", "Merii Kurisumasu!"
  };

  char pais_atual[100];
  int index;
  while (scanf(" %s", pais_atual) != EOF){
    index = indice_do_pais(pais_atual, paises);
    if (index == -1){
      printf("--- NOT FOUND ---\n");
    } else {
      printf("%s\n", message[index]);
    }
  }
}

// https://www.beecrowd.com.br/judge/pt/problems/view/1763
// Ranking 00311º, Time 0.147, Submiss Date 03/04/2023 20:59:15 (C99)