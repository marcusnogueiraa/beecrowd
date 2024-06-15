#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main(){
  int D, H, C, L;
  while (cin >> D){
    cin >> H >> C >> L;
    double hip = sqrt(H*H + C*C);
    cout << fixed << setprecision(4) << (hip*L*D) / 10000 << endl;
  }
}

// https://www.beecrowd.com.br/judge/pt/problems/view/2518
// Ranking 00856º, Time 0.000, Submiss Date 23/05/2023 16:08:51 (C++17)