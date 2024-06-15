# include <iostream>

using namespace std;

int main(){
  int cases;
  cin >> cases;
  int nota;
  for (int i = 0; i < cases; i++){
    cin >> nota;
    cout << "resposta " << i+1 << ": " << nota << endl;
  }

  return 0;
}

// https://www.beecrowd.com.br/judge/pt/problems/view/3302
// Ranking 00448º, Time 0.000, Submiss Date 16/04/2023 17:15:48 (C++17)