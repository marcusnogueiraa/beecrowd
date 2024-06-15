#include <iostream>

using namespace std;

int main(){
  int T, N; 
  cin >> T;
  for(int i = 0; i < T; i++){
    cin >> N;
    long long sum = 0, pw = 1;
    for(int k = 0; k < N; k++){
      sum += pw;
      pw*=2;
    }
    cout << pw-1 << endl;
  }
}

// https://www.beecrowd.com.br/judge/pt/problems/view/2232
// Ranking 01226º, Time 0.000, Submiss Date 09/06/2023 14:11:52 (C++17)