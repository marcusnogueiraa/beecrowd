#include <iostream>

using namespace std;

int main(){
  int N, L, D, I = 1;
  cin >> N >> L >> D;
  while(I++) if (I*L >= N*D) break;
  cout << I*L << endl;
}

// https://www.beecrowd.com.br/judge/pt/problems/view/3416
// Ranking 00100º, Time 0.000, Submiss Date 09/06/2023 19:08:01 (C++17)