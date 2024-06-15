#include <iostream>

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

int mod131071(string bin){
  int tt = 0;
  int last;
  bool as_first = true;
  int max_exp = bin.size() - 1;
  for(int i = 0; i <= max_exp; i++){
    if (as_first and bin[i] == '1'){
      as_first = false;
      tt += binpow(2, max_exp - i, 131071);
      last = tt;
    } else if (bin[i] == '1'){
      last = (last*2)%131071;
      tt += last;
    }
  }
  return tt % 131071;
}

int main(){
  string str = "", inp;
  while (cin >> inp){
    if (inp.back() != '#'){
      str = str + inp;
      continue;
    }
    else {
      inp.pop_back();
      str = str + inp;
    }

    if (mod131071(str) == 0){
      cout << "YES\n"; 
    } else{
      cout << "NO\n";
    }
    str = "";
  }
}

// https://www.beecrowd.com.br/judge/pt/problems/view/1398
// Ranking 00247º, Time 0.018, Submiss Date 29/05/2023 17:28:02 (C++17)