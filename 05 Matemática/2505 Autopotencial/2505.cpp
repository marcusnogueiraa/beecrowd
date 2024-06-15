#include <iostream>
#include <math.h>

#define ll long long

using namespace std;

int chartoint(char c){
  // Converte de char para int
  return c - '0';
}

ll fastpow(ll a, ll b, ll m) {
    // Calcula A^B mod M
    a %= m;
    ll res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}

ll bignum_mod(string s, int d){
  // Calcula o modulo de um numero muito grande (s) por (d) 
  ll base = 1%d;
  ll res = 0;
  for(int i = s.size() - 1; i >= 0; i--){
    res = (res + (chartoint(s[i])*1LL*base)%d)%d;
    base = (base*10)%d;
  }
  return res;
}

int main()
{
  cin.tie(0)->sync_with_stdio(0);
  string B, E;
  cin >> B >> E;
  
  // E mod PHI(9)
  ll exp = bignum_mod(E, 6);
  // B mod 9
  ll base_mod = bignum_mod(B, 9);
  // B^(E mod PHI(9)) mod 9
  ll result = fastpow(base_mod, exp, 9);
  
  if (result == 0) cout << "9\n";
  else cout << result << endl;

}

// https://www.beecrowd.com.br/judge/pt/problems/view/2505
// Ranking 00024º, Time 0.000, Submiss Date 19/07/2023 01:06:41 (C++17)