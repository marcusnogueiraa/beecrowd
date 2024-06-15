# include <iostream>

using namespace std;

int main(){
  string palavra;
  cin >> palavra;
  if (palavra.length() >= 10){
    cout << "palavrao" << endl;
  } else {
    cout << "palavrinha" << endl;
  }

  return 0;
}

// https://www.beecrowd.com.br/judge/pt/problems/view/3303
// Ranking 00595º, Time 0.000, Submiss Date 16/04/2023 17:19:40 (C++17)