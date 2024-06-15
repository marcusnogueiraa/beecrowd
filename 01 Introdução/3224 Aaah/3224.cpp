# include <iostream>

using namespace std;

int main(){
  string jon, medico;
  cin >> jon;
  cin >> medico;
  if (medico.length() > jon.length()){
    cout << "no" << endl;
  } else {
    cout << "go" << endl;
  }

  return 0;
}

// https://www.beecrowd.com.br/judge/pt/problems/view/3224
// Ranking 00241º, Time 0.000, Submiss Date 16/04/2023 16:50:48 (C++17)