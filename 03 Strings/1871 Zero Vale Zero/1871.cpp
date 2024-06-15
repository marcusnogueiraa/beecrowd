# include <iostream>
# include <string>

using namespace std;

int main(){
  int M, N;
  cin >> M >> N;
  while (M != 0 or N != 0){
    string str = to_string(N+M);
    for (char letter : str){
      if (letter != '0'){
        cout << letter;
      }
    }
    cout << endl;
    cin >> M >> N;
  }
}

// https://www.beecrowd.com.br/judge/pt/problems/view/1871
// Ranking 01802º, Time 0.000, Submiss Date 17/04/2023 06:59:12 (C++17)