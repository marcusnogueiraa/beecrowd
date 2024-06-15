# include <iostream>
# include <string>

using namespace std;

int main(){
  int N;
  cin >> N;
  for (int i = 0; i < N; i++){
    string frase;
    int casa;
    cin >> frase >> casa;
    for (int i = 0; i < frase.length(); i++){
      frase.at(i) -= casa;
      char pos = frase.at(i);
      if (pos < 'A') frase.at(i) = '[' - ('A' - pos);
    }
    cout << frase << endl;
  }
}

// https://www.beecrowd.com.br/judge/pt/problems/view/1253
// Ranking 04323º, Time 0.170, Submiss Date 03/05/2023 16:24:07 (C++17)