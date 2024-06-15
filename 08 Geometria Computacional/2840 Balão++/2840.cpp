# include <iostream>
# include <math.h>

using namespace std;

int main(){
  int R, L;
  cin >> R >> L;
  double V = (4.0/3.0) * (3.1415*pow(R, 3));
  int result = L / V;
  cout << result << endl;
}

// https://www.beecrowd.com.br/judge/pt/problems/view/2840
// Ranking 00985º, Time 0.000, Submiss Date 23/05/2023 14:35:00 (C++17)