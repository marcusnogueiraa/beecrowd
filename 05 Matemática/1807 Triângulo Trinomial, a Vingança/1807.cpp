# include <iostream>

using namespace std;

long long binpow(long long a, long long b, long long m) {
    a %= m;
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}

int main(){
  long long R;
  cin >> R;
  cout << binpow(3, R, 2147483647) << endl;
}

// https://www.beecrowd.com.br/judge/pt/problems/view/1807
// Ranking 00656º, Time 0.000, Submiss Date 29/05/2023 01:56:51 (C++17)