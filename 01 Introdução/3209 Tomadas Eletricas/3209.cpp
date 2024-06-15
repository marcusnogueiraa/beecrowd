# include <iostream>

using namespace std;

int main(){
  int n;
  cin >> n;
  for (int i = 0; i < n; i++){
    int quantidade, soma = 0;
    cin >> quantidade;
    int num;
    for (int k = 0; k < quantidade; k++){
      cin >> num;
      soma += num;
    }
    cout << soma - quantidade + 1 << endl;
  }
}

// https://www.beecrowd.com.br/judge/pt/problems/view/3209
// Ranking 00217º, Time 0.000, Submiss Date 01/05/2023 17:20:11 (C++17)