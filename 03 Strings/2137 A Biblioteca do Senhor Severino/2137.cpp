# include <iostream>
# include <vector>
# include <algorithm>

using namespace std;

int main(){
  int cases;
  while (cin >> cases){
    int numeros[cases];
    for (int i = 0; i < cases; i++){
      cin >> numeros[i];
    }
    sort(numeros, numeros+cases);
    for (int i = 0; i < cases; i++){
        if (numeros[i] >= 1000){
          cout << numeros[i] << endl;
        } else if (numeros[i] >= 100){
          cout << "0" << numeros[i] << endl;
        } else if (numeros[i] >= 10) {
          cout << "00" << numeros[i] << endl;
        } else {
          cout << "000" << numeros[i] << endl;
        }
    }
  }
}

// https://www.beecrowd.com.br/judge/pt/problems/view/2137
// Ranking 01306º, Time 0.000, Submiss Date 20/04/2023 10:38:35 (C++17)