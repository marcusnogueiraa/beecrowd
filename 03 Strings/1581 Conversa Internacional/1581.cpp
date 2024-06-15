# include <iostream>

using namespace std;

int main(){
  int cases;
  cin >> cases;
  for (int i = 0; i < cases; i++){
    int K;
    cin >> K;
    string vector[K];
    for (int j = 0; j < K; j++){
      cin >> vector[j];
    }
    bool is_english = false;
    for (int j = 1; j < K; j++){
      if (vector[j] != vector[j-1]){
        is_english = true;
        break;
      }
    }
    if (is_english){
      cout << "ingles" << endl;
    } else {
      cout << vector[0] << endl;
    }
  }
}

// https://www.beecrowd.com.br/judge/pt/problems/view/1581
// Ranking 01704º, Time 0.002, Submiss Date 20/04/2023 01:05:27 (C++17)