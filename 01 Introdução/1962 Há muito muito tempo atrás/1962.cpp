# include <iostream>

using namespace std;

int main(){
  int cases;
  cin >> cases;

  for (int i = 0; i < cases; i++){
      int ano;
      cin >> ano;

      int ano_original = 2015 - ano;
      if (ano_original > 0){
        cout << ano_original << " D.C." << endl;
      } else {
        cout << ano_original * -1 + 1<< " A.C." << endl;
      }
  }

}

// https://www.beecrowd.com.br/judge/pt/problems/view/2160
// Ranking 01904º, Time 0.254, Submiss Date 16/04/2023 16:32:45 (C++17)