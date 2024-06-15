#include <iostream>

using namespace std;

int main(){
  int T, N, mediana;
  cin >> T;
  for(int i = 0; i < T; i++){
    cin >> N;
    int vet[N];
    for(int k = 0; k < N; k++) cin >> vet[k];
    mediana = N / 2;
    if (N & 0) mediana++;
    cout << "Case " << i+1 << ": " << vet[mediana] << endl;
  }
}

// https://www.beecrowd.com.br/judge/pt/problems/view/1436
// Ranking 02479º, Time 0.000, Submiss Date 09/06/2023 13:29:34 (C++17)