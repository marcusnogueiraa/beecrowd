# include <iostream>
# include <iomanip>

using namespace std;

int main(){
  double f1, f2;
  cin >> f1 >> f2;
  cout << fixed << setprecision(6) << ((((1.0 + f1/100.00) * (1.0 + f2/100.00)) - 1.0) * 100.0) << endl;
}

// https://www.beecrowd.com.br/judge/pt/problems/view/3346
// Ranking 00208º, Time 0.000, Submiss Date 29/04/2023 16:04:01 (C++17)