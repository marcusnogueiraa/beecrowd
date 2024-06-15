# include <iostream>

using namespace std;

int main(){
  int n, poder_de_luta;
  cin >> n;
  for (int i = 0; i < n; i++){
    cin >> poder_de_luta;
    if (poder_de_luta > 8000){
      cout << "Mais de 8000!" << endl;
    } else {
      cout << "Inseto!" << endl;
    }
  }
}

// https://www.beecrowd.com.br/judge/pt/problems/view/2862
// Ranking 01271º, Time 0.000, Submiss Date 28/04/2023 01:39:48 (C++17)