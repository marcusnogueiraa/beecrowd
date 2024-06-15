# include <iostream>
# include <iomanip>
# include <math.h>

using namespace std;

int main(){
  int N, X;
  cin >> N;
  for (int i = 0; i < N; i++){
    cin >> X;
    long long int result = (pow(2, X) - 1) / 12000;
    cout << result << " kg" << endl;
  }
}

// https://www.beecrowd.com.br/judge/pt/problems/view/1169
// Ranking 03165º, Time 0.000, Submiss Date 24/04/2023 16:39:42 (C++17)