# include <iostream>
# include <iomanip>

using namespace std;

int main(){
  double N, X;
  cin >> N >> X;
  cout << fixed << setprecision(2) << X / (N+2) << endl;
}

// https://www.beecrowd.com.br/judge/pt/problems/view/3145
// Ranking 00265º, Time 0.000, Submiss Date 28/04/2023 01:51:06 (C++17)