#include <iostream>

using namespace std;

int main(){
  int cases;
  cin >> cases;
  for (int i = 0; i < cases; i++){
    int goals;
    int G = 0, B = 0, R = 0;
    cin >> goals;
    for (int k = 0; k < goals; k++){
      char M, S;
      cin >> M >> S;
      if (M == 'G'){
        if (S == 'B') G += 2;
        else G++;
      }
      else if (M == 'B'){
        if (S == 'R') B += 2;
        else B++;
      }
      else {
        if (S == 'G') R += 2;
        else R++;  
      }
    }

    if (G == B and B == R){
      cout << "trempate\n";
    } else if (G > B and G > R){
      cout << "green\n";
    }  else if (B > G and B > R){
      cout << "blue\n";
    } else if (R > B and R > G){
      cout << "red\n";
    } else {
      cout << "empate\n";
    }
  }
}

// https://www.beecrowd.com.br/judge/pt/problems/view/1875
// Ranking 00849º, Time 0.000, Submiss Date 23/05/2023 15:05:12 (C++17)