#include <iostream>

using namespace std;

int main(){
  cin.tie(0)->sync_with_stdio(0);
  string jogada;
  cin >> jogada;
  int O = 0;
  int X = 0;
  for(int i = 0; i < 3; i++){
    if (jogada.at(i) == 'O') O++;
    else if (jogada.at(i) == 'X') X++;
  }
  if (O >= 2 || X == 3) cout << "?\n";
  else if (jogada == "XOX") cout << "*\n";
  else cout << "Alice\n";
}

// https://www.beecrowd.com.br/judge/pt/problems/view/3454
// Ranking 00011º, Time 0.000, Submiss Date 03/08/2023 10:28:05 (C++20)
