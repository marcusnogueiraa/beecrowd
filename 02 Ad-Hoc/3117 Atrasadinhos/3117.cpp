#include <iostream>

using namespace std;

int main(){
  cin.tie(0)->sync_with_stdio(0);
  int N, K, A, T = 0;
  cin >> N >> K;
  for(int i = 0; i < N; i++){
    cin >> A;
    if(A <= 0){
      T++;
      if (T >= K) break;
    }
  }
  if (T >= K) cout << "YES\n";
  else cout << "NO\n";
}

// https://www.beecrowd.com.br/judge/pt/problems/view/3117
// Ranking 00047º, Time 0.000, Submiss Date 09/06/2023 19:23:29 (C++17)