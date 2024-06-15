#include <iostream>

#define ll long long
#define MOD 1300031

using namespace std;

ll* FAT;
ll last = 1;

ll invM(ll b, ll m) {
    ll originalM = m;
    ll x0 = 0, x1 = 1;
    ll q, temp;

    if (m == 1)
        return 0;

    while (b > 1) {
        q = b / m;
        temp = m;
        m = b % m;
        b = temp;
        temp = x0;
        x0 = x1 - q * x0;
        x1 = temp;
    }

    if (x1 < 0)
        x1 += originalM;

    return x1;
}

ll modfat(ll n){
  if (n > last){
    for (ll i = last+1; i <= n; i++){
      FAT[i] = (i * FAT[i-1]) % MOD;
      last++;
    }
  }
  return FAT[n];
}

int main(){
  ll cases;
  ll N, C;
  cin >> cases;

  FAT = new ll[1000000];
  FAT[0] = 1;
  FAT[1] = 1;

  for(int i = 0; i < cases; i++){
    cin >> N >> C;
    ll num = modfat(N+C-1);
    ll den = (modfat(N-1) * modfat(C));
    cout << (num * invM(den, MOD)) % MOD << endl;
  }

}

// https://www.beecrowd.com.br/judge/pt/problems/view/1381
// Ranking 00010º, Time 0.018, Submiss Date 27/06/2023 21:38:20 (C++17)