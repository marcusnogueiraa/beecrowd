# include <iostream>
# include <cctype>

using namespace std;

int main(){
  int cases;
  cin >> cases;
  for (int i = 0; i < cases; i++){
    string senha;
    cin >> senha;
    int possibilidades = 1;
    for (char letra : senha){
      letra = tolower(letra);
      if (letra == 'a' or letra == 'e' or letra == 'i' or letra == 'o' or letra == 's'){
        possibilidades = possibilidades * 3;
      } else{
        possibilidades = possibilidades * 2;
      }
    }
    cout << possibilidades << endl;
  }
}

// https://www.beecrowd.com.br/judge/pt/problems/view/1632
// Ranking 00741º, Time 0.000, Submiss Date 20/04/2023 00:32:58 (C++17)