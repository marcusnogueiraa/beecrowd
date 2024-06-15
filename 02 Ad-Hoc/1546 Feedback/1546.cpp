# include <iostream>

using namespace std;

int main(){
  int cases;
  cin >> cases;
  for (int i = 0; i < cases; i++){
    int fbs;
    cin >> fbs;
    for (int k = 0; k < fbs; k++){
      int feedback;
      cin >> feedback;
      if (feedback == 1) cout << "Rolien\n";
      else if (feedback == 2) cout << "Naej\n";
      else if (feedback == 3) cout << "Elehcim\n";
      else cout << "Odranoel\n";
    }
  }
}

// https://www.beecrowd.com.br/judge/pt/problems/view/1546
// Ranking 02528º, Time 0.050, Submiss Date 20/05/2023 01:01:32 (C++17)