#include <iostream>
#include <iomanip>
#define ll long long

using namespace std;

string StrDecToStrBin(string decimal){
    if (decimal == "0") {
        return "0";
    }
    string resultado;
    string resto = decimal;

    while (resto != "0") {
        int carry = 0;
        for (size_t i = 0; i < resto.length(); ++i) {
            int digito = resto[i] - '0';
            int quociente = carry * 10 + digito;
            resto[i] = quociente / 2 + '0';
            carry = quociente % 2;
        }
        resultado = to_string(carry) + resultado;

        size_t pos = resto.find_first_not_of('0');
        if (pos != string::npos) {
            resto = resto.substr(pos);
        } else {
            resto = "0";
        }
    }

    return resultado;
}

ll bignum_mod(string b, ll m) {
  ll base = 2 % m;
  ll res = 1;
  for (int i = b.size() - 1; i >= 0; i--) {
    if (b[i] == '1') {
      res = (res * base) % m;
    }
    base = (base * base) % m;
  }
  return res;
}


int main()
{
    cin.tie(0)->sync_with_stdio(0);
	  string str;
    cin >> str;
    string b = StrDecToStrBin(str);
    ll time = bignum_mod(b, 86400) - 1;
    
    ll hours = time / 3600;
    time = time % 3600;
    
    ll minutes = time / 60;
    ll seconds = time % 60;

    cout << setw(2) << setfill('0') << hours << ":";
    cout << setw(2) << setfill('0') << minutes << ":";
    cout << setw(2) << setfill('0') << seconds << endl;
}

// https://www.beecrowd.com.br/judge/pt/problems/view/2681
// Ranking 00039º, Time 0.000, Submiss Date 18/07/2023 15:29:01 (C++17)