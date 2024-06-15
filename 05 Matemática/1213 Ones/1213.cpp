# include <iostream>
# include <string>
# include <vector>

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
  int num, res;
  while(cin >> num){
    int m_ant = 1;
    int exp = 1;
    while (true){
      res = (binpow(10,exp,num) + m_ant) % num;
      if (res == 0){
        cout << exp+1 << endl;
        break;
      }
      m_ant = res;
      exp++;
    }

  }
  
  
}

// https://www.beecrowd.com.br/judge/pt/problems/view/1213
// Ranking 01262º, Time 0.255, Submiss Date 27/05/2023 18:12:40 (C++17)