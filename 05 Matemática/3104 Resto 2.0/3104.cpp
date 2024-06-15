#include <iostream>

using namespace std;

int chartoint(char c){
  return c - '0';
}

int bignum_mod(string s, int d){
  int base = 1%d;
  int res = 0;
  for(int i = s.size() - 1; i >= 0; i--){
    res = (res + (chartoint(s[i])*1LL*base)%d)%d;
    base = (base*10)%d;
  }
  return res;
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    string A;
    int B;
    while(cin >> A >> B){
        cout << bignum_mod(A, B) << endl;
    }
}

// https://www.beecrowd.com.br/judge/pt/problems/view/3104
// Ranking 00043º, Time 0.272, Submiss Date 09/06/2023 01:32:50 (C++17)