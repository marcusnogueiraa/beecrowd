#include <iostream>

using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int N, M, K;
  while (cin >> N >> M >> K){
      if (N == 0 && M == 0 && K == 0) break;
      K--;

      int* elements = new int[N];
      for(int i = 0; i < N; i++) cin >> elements[i];
      
      int rotations = M % N;
      int index;

      if (rotations > K) index = N-(rotations-K);
      else index = K - rotations;

      cout << elements[index] << "\n";

  }
  return 0;
}

// https://www.beecrowd.com.br/judge/pt/problems/view/2505
// Ranking 00008º, Time 0.000, Submiss Date 17/07/2023 23:46:42 (C++17)