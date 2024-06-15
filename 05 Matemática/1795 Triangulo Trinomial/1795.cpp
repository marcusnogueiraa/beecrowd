#include <iostream>
#include <math.h>

using namespace std;

long long fastpow(long long a, long long b) {
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}

int main(){
  long long R;
  cin >> R;
  cout << fastpow(3, R) << endl;
}

// https://www.beecrowd.com.br/judge/pt/problems/view/1795
// Ranking 01543º, Time 0.000, Submiss Date 09/06/2023 13:42:56 (C++17)