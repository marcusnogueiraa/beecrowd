#include <iostream>

using namespace std;

int percuse(int init, int *up, int *dn, int tam){
  int N = 0, qtd = 0;
  int *vet, *other, *aux;
  if (init == 0){
    vet = dn;
    other = up;
  } else {
    vet = up;
    other = dn;
  }

  while (N != tam-1){
    if (vet[N+1] == 0 || vet[N+1] > vet[N]){
      aux = vet;
      vet = other;
      other = aux;
      qtd++;
    } else {
      N++;
    }
  }
  return qtd;
}

int main(){
  int tam;
  cin >> tam;
  int up[tam];
  int dn[tam];
  for(int i = 0; i < tam; i++) cin >> up[i];
  for(int i = 0; i < tam; i++) cin >> dn[i];
  
  if (up[0] == 0 && dn[0] != 0){
    cout << percuse(0, up, dn, tam) << endl; 
  }
  else if (up[0] != 0 && dn[0] == 0){
    cout << percuse(1, up, dn, tam) << endl; 
  } else {
    int per1 = percuse(1, up, dn, tam);
    int per2 = percuse(0, up, dn, tam);
    int res = per1;
    if (per2 < res) res = per2;
    cout << res << endl;
  }

}

// https://www.beecrowd.com.br/judge/pt/problems/view/3310
// Ranking 00033º, Time 0.000, Submiss Date 13/06/2023 13:15:21 (C++17)