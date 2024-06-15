# include <iostream>
# include <string>

using namespace std;

int main(){
  string frase;

  while (getline(cin, frase)) {
    bool maiusculo = true;
    for (char letra : frase){
      if (letra == ' '){
        cout << ' ';
        continue;
      }
      if (maiusculo == true){
        letra = toupper(letra);
        cout << letra;
        maiusculo = false;
      } else {
        letra = tolower(letra);
        cout << letra;
        maiusculo = true;
      }
    }
    cout << endl;
  }
}

// https://www.beecrowd.com.br/judge/pt/problems/view/1234
// Ranking 03805º, Time 0.108, Submiss Date 17/04/2023 06:41:54 (C++17)