#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int main(){
  int N, M;
  int num1;
  string num2;
  cin >> N;
  for (int c = 0; c < N; c++){
    cin >> num1 >> num2;
    M = pow(10, num2.length());
    if (num1 % M == stoi(num2)) cout << "encaixa" << endl;
    else cout << "nao encaixa" << endl;
  }
}

// https://www.beecrowd.com.br/judge/pt/problems/view/1240
// Ranking 01870º, Time 0.082, Submiss Date 17/07/2023 18:50:27 (C++17)