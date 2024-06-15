#include <iostream>

using namespace std;

int chartoint(char c){
  return c - '0';
}

bool mod100(string s){
  int un = chartoint(s.back());
  int dec = chartoint(s.at(s.size() - 2));
  if (un == 0 and dec == 0) return true;
  else return false;
}

int mod(string s, int d){
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
  string year;
  bool first_case = true;
  while (cin >> year){
    if (first_case){
      first_case = false;
    } else {
      cout << endl;
    }

    bool is_leap = false;
    bool is_ordinary = true;
    if (mod(year, 4) == 0 && mod100(year) == false || mod(year, 400) == 0){
      cout << "This is leap year.\n";
      is_leap = true;
      is_ordinary = false;
    }

    if (mod(year, 15) == 0){
      cout << "This is huluculu festival year.\n";
      is_ordinary = false;
    }
    if (mod(year,55) == 0 && is_leap){
      cout << "This is bulukulu festival year.\n";
    }

    if (is_ordinary){
      cout << "This is an ordinary year.\n";
    }
  }
}

// https://www.beecrowd.com.br/judge/pt/problems/view/1279
// Ranking 00397º, Time 0.000, Submiss Date 29/05/2023 01:32:07 (C++17)