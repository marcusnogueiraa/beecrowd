# include <iostream>

using namespace std;

int main(){
  int N;
  while (cin >> N){
    int spaces = N / 2;
    int asteriscos = 1;
    while (asteriscos <= N){
      for (int i = 0; i < spaces; i++){
        cout << " ";
      }
      for (int i = 0; i < asteriscos; i++){
        cout << "*";
      }
      cout << endl;
      asteriscos = asteriscos + 2;
      spaces--;
    }
    for (int i = 0; i < N / 2; i++){
      cout << " ";
    }
    cout << "*" << endl;
    for (int i = 0; i < (N / 2) - 1; i++){
      cout << " ";
    }
    cout << "***" << endl;
    cout << endl;
  }
}

// https://www.beecrowd.com.br/judge/pt/problems/view/1632
// Ranking 01134º, Time 0.072, Submiss Date 20/04/2023 00:53:11 (C++17)