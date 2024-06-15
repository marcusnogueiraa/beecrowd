#include <iostream>

using namespace std;

int main(){
  int cases, num, tot = 0;
  cin >> cases;
  for(int i = 0; i < cases; i++){
    cin >> num;
    if (num == 1) tot++;
  }
  cout << tot << endl;
}

// https://www.beecrowd.com.br/judge/pt/problems/view/3126
// Ranking 00277º, Time 0.000, Submiss Date 11/06/2023 16:52:14 (C++17)