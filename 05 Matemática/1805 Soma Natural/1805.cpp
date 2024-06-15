#include <iostream>

using namespace std;

int main(){
  cin.tie(0)->sync_with_stdio(0);
  unsigned long long A, B, sum;
  cin >> A >> B;
  sum = (A + B)*(B - A +1) / 2;
  cout << sum << endl;
}

// https://www.beecrowd.com.br/judge/pt/problems/view/1805
// Ranking 02614º, Time 0.000, Submiss Date 09/06/2023 11:51:35 (C++17)