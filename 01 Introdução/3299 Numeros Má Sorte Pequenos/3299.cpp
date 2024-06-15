#include <iostream>

using namespace std;

int main(){
  string numero;
  bool mala_suerte = false;
  cin >> numero;
  for (int i = 1; i < numero.length(); i++){
    if (numero[i] == '3' && numero[i-1] == '1'){
      mala_suerte = true;
      break;
    }
  }
  if (mala_suerte){
    cout << numero << " es de Mala Suerte" << endl;
  } else {
    cout << numero << " NO es de Mala Suerte" << endl;
  }

  return 0;
}

// https://www.beecrowd.com.br/judge/pt/problems/view/3299
// Ranking 00274º, Time 0.000, Submiss Date 16/04/2023 17:01:09 (C++17)