# include <iostream>

using namespace std;

int main(){
  string number;
  cin >> number;
  for (int i = number.length() - 1; i >= 0; i--){
    cout << number.at(i);
  }
  cout << endl;
}

// https://www.beecrowd.com.br/judge/pt/problems/view/1984
// Ranking 03297º, Time 0.000, Submiss Date 27/04/2023 19:25:56 (C++17)