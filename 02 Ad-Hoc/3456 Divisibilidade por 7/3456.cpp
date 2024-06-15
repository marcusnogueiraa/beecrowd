#include <iostream>

using namespace std;

int main(){
  cin.tie(0)->sync_with_stdio(0);
  long long X;
  cin >> X;
  if (X >= 10) cout << X << endl;
  while(true){
    X = (X/10 * 3) + (X%10);
    cout << X << endl;
    if (X < 10){
      break;
    }
  }
}

// https://www.beecrowd.com.br/judge/pt/problems/view/3456
// Ranking 00006º, Time 0.000, Submiss Date 03/08/2023 10:00:13 (C++20)
