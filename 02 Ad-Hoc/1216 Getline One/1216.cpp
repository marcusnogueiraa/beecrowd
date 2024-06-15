#include <iostream>
#include <iomanip>

using namespace std;

int main(){
  cin.tie(0)->sync_with_stdio(0);
  string name;
  char buff;
  int qtd = 0;
  double total = 0.0, actual;
  while(getline(cin, name)){
    cin >> actual;
    cin >> buff;
    total+=actual;
    qtd++;
  }
  cout << fixed << setprecision(1) << total / qtd << endl;
}

// https://www.beecrowd.com.br/judge/pt/problems/view/1216
// Ranking 00136º, Time 0.003, Submiss Date 13/06/2023 08:55:33 (C++17)