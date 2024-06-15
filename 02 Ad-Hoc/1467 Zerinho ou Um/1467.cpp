# include <iostream>

using namespace std;

int main(){
  int A, B, C;
  while(cin >> A >> B >> C){
    if (A == B and B != C) cout << "C\n";
    else if (A == C and B != C) cout << "B\n";
    else if (B == C and A != B) cout << "A\n";
    else cout << "*\n";
  }

}

// https://www.beecrowd.com.br/judge/pt/problems/view/1467
// Ranking 04388º, Time 0.072, Submiss Date 19/05/2023 10:45:36 (C++17)