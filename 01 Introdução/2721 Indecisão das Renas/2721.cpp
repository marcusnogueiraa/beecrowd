# include <iostream>

using namespace std;

int main(){
  int a,b,c,d,e,f,g,h,i;
  string renas[] = {"Rudolph", "Dasher", "Dancer",
  "Prancer", "Vixen", "Comet", "Cupid", "Donner",
  "Blitzen"};
  cin >> a >> b >> c >> d >> e >> f >> g >> h >> i;
  int total = a+b+c+d+e+f+g+h+i;
  cout << renas[total % 9] << endl;
}

// https://www.beecrowd.com.br/judge/pt/problems/view/2721
// Ranking 01240º, Time 0.000, Submiss Date 25/05/2023 01:16:49 (C++17)