#include <iostream>
#include <cstring>

using namespace std;

int MEMO[40];
int MEMO2[40];

int fib(int num){
  if (MEMO[num] == -1){
    MEMO[num] = fib(num-1) + fib(num-2);
    MEMO2[num] = MEMO2[num-1] + MEMO2[num-2] + 2;
    return MEMO[num];
  } else {
    return MEMO[num];
  }
}

int main(){
  cin.tie(0)->sync_with_stdio(0);
  memset(MEMO, -1, sizeof(MEMO));
  memset(MEMO2, -1, sizeof(MEMO2));
  MEMO2[0] = 0;
  MEMO2[1] = 0;
  MEMO2[2] = 2;
  MEMO[0] = 0;
  MEMO[1] = 1;

  int N, X;
  cin >> N;
  for(int i = 0; i < N; i++){
    cin >> X;
    fib(X);
    cout << "fib(" << X << ") = " << MEMO2[X] << " calls = " << MEMO[X] << endl;
  }
}

// https://www.beecrowd.com.br/judge/pt/problems/view/1029
// Ranking 01320º, Time 0.000, Submiss Date 18/06/2023 11:21:40 (C++17)