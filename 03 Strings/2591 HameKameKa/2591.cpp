# include <iostream>

using namespace std;

int main(){
  int cases;
  cin >> cases;
  for (int i = 0; i < cases; i++){
    string hamekame;
    cin >> hamekame;
    int X = 0;
    int Y = 0;
    bool asX = true;
    for (int j = 1; j < hamekame.length(); j++){
      if (asX and hamekame[j] == 'a'){
        X++;
        if (hamekame[j+1] == 'm') asX = false;
      } else if (asX == false and hamekame[j] == 'a') {
        Y++;
      }
    }

    cout << 'k';
    for (int k = 0; k < X*Y; k++){
      cout << "a";
    }
    cout << endl;
  }
}

// https://www.beecrowd.com.br/judge/pt/problems/view/2591
// Ranking 00440º, Time 0.020, Submiss Date 20/04/2023 00:20:55 (C++17)