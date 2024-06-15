# include <iostream>

using namespace std;

int main(){
  int B, G;
  cin >> B >> G;
  if (B >= G/2) cout << "Amelia tem todas bolinhas!\n";
  else cout << "Faltam " << G/2 - B << " bolinha(s)\n";
}

// https://www.beecrowd.com.br/judge/pt/problems/view/3170
// Ranking 00443º, Time 0.000, Submiss Date 29/04/2023 13:12:09 (C++17)