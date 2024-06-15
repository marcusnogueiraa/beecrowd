# include <iostream>

using namespace std;

int main(){
  int N;
  cin >> N;
  for (int i = 0; i < N; i++){
    int dias = 0;
    float comida;
    cin >> comida;
    while (comida > 1){
      dias++;
      comida = comida / 2;
    }
    cout << dias << " dias" << endl;
  }
}

// https://www.beecrowd.com.br/judge/pt/problems/view/1170
// Ranking 03527º, Time 0.000, Submiss Date 21/04/2023 00:36:42 (C++17)