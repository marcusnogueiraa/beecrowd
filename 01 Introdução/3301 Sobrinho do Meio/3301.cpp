# include <iostream>

using namespace std;

int main(){
  int A, B, C;
  cin >> A >> B >> C;
  if ((A > B && A < C) || (A > C && A < B)){
    cout << "huguinho" << endl;
  } else if ((B > A && B < C) || (B > C && B < A)){
    cout << "zezinho" << endl;
  } else {
    cout << "luisinho" << endl;
  }

  return 0;
}

// https://www.beecrowd.com.br/judge/pt/problems/view/3301
// Ranking 00412º, Time 0.000, Submiss Date 16/04/2023 17:08:14 (C++17)