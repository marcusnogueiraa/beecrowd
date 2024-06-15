#include <iostream>

#define ll long long
#define MOD 1000000007

using namespace std;

ll charToLL(char chr){
  return chr - 'A';
}

int main(){
  cin.tie(0)->sync_with_stdio(0);
  string str;
  while(cin >> str){
    ll total = 0;
    ll exp_mod = 1%MOD;
    for(int i = str.length() - 1; i >= 0; i--){
      total += (charToLL(str[i]) * exp_mod) % MOD;
      exp_mod = (exp_mod * 26) % MOD;
    }
    total = total % MOD;
    cout << total << endl;
  }
}

// https://www.beecrowd.com.br/judge/pt/problems/view/2336
// Ranking 00012º, Time 0.015, Submiss Date 27/06/2023 19:43:59 (C++17)