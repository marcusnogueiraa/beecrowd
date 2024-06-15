#include <iostream>

using namespace std;

int isprimo(int num){
  if (num <= 1) return false;
  
  bool is_primo = true;
  for (int i = 2; i*i <= num; i++){
    if (num % i == 0) is_primo = false;
  }
  return is_primo;
}

int main(){
  cin.tie(0)->sync_with_stdio(0);
  string num;
  while (cin >> num){
    bool is_primo = false, is_superprimo = false;
    if (isprimo(stoi(num))){
      is_primo = true;
    }

    if (is_primo){
      is_superprimo = true;
      for(char digit : num){
        if (digit != '2' && digit != '3' && digit != '5' && digit != '7'){
          is_superprimo = false;
          break;
        }
      }
    }

    if (is_superprimo) cout << "Super\n";
    else if (is_primo) cout << "Primo\n";
    else cout << "Nada\n";
    
  }
}

// https://www.beecrowd.com.br/judge/pt/problems/view/2674
// Ranking 00075º, Time 0.000, Submiss Date 09/06/2023 00:21:04 (C++17)