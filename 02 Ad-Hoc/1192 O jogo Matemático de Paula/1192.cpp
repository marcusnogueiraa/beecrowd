# include <iostream>

using namespace std;

int main(){
  int cases;
  string op;
  cin >> cases;
  for (int i = 0; i < cases; i++){
    cin >> op;
    int n1 = op.at(0) - '0';
    int n2 = op.at(2) - '0';
    if (n1 == n2) cout << n1*n2 << endl;
    else if (op.at(1) >= 97) cout << n1+n2 << endl;
    else cout << n2-n1 << endl;
  }
}

// https://www.beecrowd.com.br/judge/pt/problems/view/1192
// Ranking 03309º, Time 0.165, Submiss Date 19/05/2023 11:19:15 (C++17)