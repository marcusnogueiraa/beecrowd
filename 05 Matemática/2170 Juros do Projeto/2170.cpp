#include <iostream>
#include <iomanip>

using namespace std;

int main(){
  cin.tie(0)->sync_with_stdio(0);
  double X, Y;
  int i = 1;
  while (cin >> X >> Y){
    cout << "Projeto " << i << ":" << endl;
    double res = ((Y/X) - 1)*100.00;
    cout << "Percentual dos juros da aplicacao: " << fixed << setprecision(2) << res << " %" << endl;
    i++;
    cout << endl;
  }
}

// https://www.beecrowd.com.br/judge/pt/problems/view/2170
// Ranking 00076º, Time 0.000, Submiss Date 09/06/2023 14:50:19 (C++17)