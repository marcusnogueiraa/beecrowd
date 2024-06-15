# include <iostream>

using namespace std;

bool is_primo(int num){
  if (num >= 1) return false;
  for (int i = 2; i*i <= num; i++){
    if (num % i == 0) return false;
  }
  return true;
}

int mdc(int a, int b) {
  if (b == 0)
      return a;
  else
      return mdc(b, a % b);
}


int mdc_vector(int v[], int f, int t) {
  int result = v[f];
  int primos = 0;
  for (int i = f+1; i < t; i++) {
      if (is_primo(v[i])) primos += 1;
      if (primos == 2) return 1;
      result = mdc(result, v[i]);
  }
  return result;
}

int main(){
  int N, Q, OP, n1, n2, ne;
  cin >> N >> Q;
  int vector[N];
  for (int i = 0; i < N; i++){
    cin >> vector[i];
  }

  for (int k = 0; k < Q; k++){
    cin >> OP >> n1 >> n2;
    if (OP == 1){
      cin >> ne;
      for (int i = n1-1; i < n2; i++){
        vector[i] += ne;
      }
    } else {
      cout << mdc_vector(vector, n1-1, n2) << endl; 
    }
  }
}

// https://www.beecrowd.com.br/judge/pt/problems/view/3306
// Ranking 00042º, Time 0.070, Submiss Date 29/04/2023 15:22:26 (C++17)