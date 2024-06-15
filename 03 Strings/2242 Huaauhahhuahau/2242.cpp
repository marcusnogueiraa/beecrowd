#include <iostream>

using namespace std;

int main(){
  string risada;
  string vog_1;
  string vog_2;

  cin >> risada;

  for(int i = 0; i < risada.length(); i++){
    if (risada[i] == 'a' || risada[i] == 'e' || risada[i] == 'i' || risada[i] == 'o'
     || risada[i] == 'u'){
      vog_1+= risada[i];
     }
  }

  for(int i = risada.length() - 1; i >= 0; i--){
    if (risada[i] == 'a' || risada[i] == 'e' || risada[i] == 'i' || risada[i] == 'o'
     || risada[i] == 'u'){
      vog_2+= risada[i];
     }
  }

  if (vog_1 == vog_2) cout << "S\n";
  else cout << "N\n";
  
}

// https://www.beecrowd.com.br/judge/pt/problems/view/2242
// Ranking 01948º, Time 0.024, Submiss Date 09/06/2023 16:24:37 (C++17)