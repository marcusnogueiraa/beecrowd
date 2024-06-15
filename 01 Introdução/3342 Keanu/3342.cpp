# include <iostream>

using namespace std;

int main(){
  int n;
  cin >> n;
  n = n * n;
  cout << n / 2 + (n % 2) << " casas brancas e " << n / 2 << " casas pretas" << endl;
  return 0;
}

// https://www.beecrowd.com.br/judge/pt/problems/view/3342
// Ranking 00310º, Time 0.000, Submiss Date 16/04/2023 17:24:16 (C++17)