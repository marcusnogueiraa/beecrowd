#include <iostream>

using namespace std;

int main(){
  int inp;
  bool falha = false;
  for(int i = 0; i < 8; i++){
    cin >> inp;
    if (inp == 9){
      falha = true;
      break;
    }
  }
  if (falha) cout << "F\n";
  else cout << "S\n";
}

// https://www.beecrowd.com.br/judge/pt/problems/view/3432
// Ranking 00015º, Time 0.000, Submiss Date 29/05/2023 03:25:46 (C++17)