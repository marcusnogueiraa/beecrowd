# include <iostream>

using namespace std;

int main(){
  int cases;
  cin >> cases;
  for (int k = 0; k < cases; k++){
    string A, B;
    cin >> A >> B;
    int soma_passos = 0;
    for (int i = 0; i < A.length(); i++){
      if (B[i] >= A[i]){
        soma_passos += B[i] - A[i];
      } else {
        soma_passos += 26 - (A[i] - B[i]);
      }
    }
    cout << soma_passos << endl;
  }
}

// https://www.beecrowd.com.br/judge/pt/problems/view/1607
// Ranking 00328º, Time 0.000, Submiss Date 24/04/2023 10:08:45 (C++17)