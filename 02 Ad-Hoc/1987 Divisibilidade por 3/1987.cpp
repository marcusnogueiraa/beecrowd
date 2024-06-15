#include <iostream>

using namespace std;

int charToDec(char chr){
  return chr - '0';
}

int main(){
  cin.tie(0)->sync_with_stdio(0);
  string num;
  int buff;
  while(cin >> buff >> num){
    int tot = 0;
    for (char chr : num){
      tot += charToDec(chr);
    }
    cout << tot << " ";
    if (tot % 3 == 0) cout << "sim\n";
    else cout << "nao\n";
  }
}

// https://www.beecrowd.com.br/judge/pt/problems/view/1987
// Ranking 01010º, Time 0.000, Submiss Date 21/06/2023 16:04:28 (C++17)