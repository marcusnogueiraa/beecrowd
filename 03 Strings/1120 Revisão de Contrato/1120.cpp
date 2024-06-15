#include <iostream>
#include <string>

using namespace std;

int main(){
  char D; 
  string N;
  cin >> D >> N;
  while (D != '0' || N != "0"){
    bool as_inited = false;
    for(int i = 0; i < N.length(); i++){
      if (!as_inited && N[i] != '0' && N[i] != D) as_inited = true;
      if (as_inited && N[i] != D) cout << N[i];
    }
    cout << endl;
    cin >> D >> N;
  }
}

// https://www.beecrowd.com.br/judge/pt/problems/view/1120
// Ranking 03688º, Time 0.021, Submiss Date 09/06/2023 16:49:07 (C++17)