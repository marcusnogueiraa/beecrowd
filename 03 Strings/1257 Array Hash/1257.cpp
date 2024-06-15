#include <iostream>

using namespace std;

int main(){
  int N, L;
  cin >> N;
  for(int k = 0; k < N; k++){
    cin >> L;
    int value = 0;
    for(int j = 0; j < L; j++){
      string str;
      cin >> str;
      for (int i = 0; i < str.length(); i++){
        total += (chr - '65') + j + i;
      }
    }
    cout << total << endl;
  }
}

// https://www.beecrowd.com.br/judge/pt/problems/view/1257
// Ranking 00235º, Time 0.005, Submiss Date 13/06/2023 13:52:15 (C++17)