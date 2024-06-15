# include <iostream>

using namespace std;

int main(){
  string frase = "LIFE IS NOT A PROBLEM TO BE SOLVED";
  int num;
  cin >> num;
  for (int i = 0; i < num; i++){
    cout << frase.at(i);
  }
  cout << endl;
}

// https://www.beecrowd.com.br/judge/pt/problems/view/1864
// Ranking 03712º, Time 0.000, Submiss Date 27/04/2023 19:21:35 (C++17)