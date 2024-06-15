#include <iostream>

using namespace std;

int main(){
  cin.tie(0)->sync_with_stdio(0);
  string arr[] = {"roraima", "acre", "amapa", "amazonas", "para", "rondonia", "tocantins"};
  bool norte = false;
  string estado;
  cin >> estado;
  for (int i = 0; i < 7; i++){
    if (arr[i] == estado){
      norte = true;
      break;
    }
  }

  if (norte) cout << "Regiao Norte\n";
  else cout << "Outra regiao\n";
}

// https://www.beecrowd.com.br/judge/pt/problems/view/2803
// Ranking 00292º, Time 0.000, Submiss Date 26/07/2023 14:10:36 (C++17)
