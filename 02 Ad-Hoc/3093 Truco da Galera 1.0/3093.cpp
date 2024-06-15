#include <iostream>

using namespace std;

typedef struct{
  bool A = false;
  bool Q = false;
  bool J = false;
  bool K = false;
} supersticao;


int main(){
  cin.tie(0)->sync_with_stdio(0);
  string cards;
  int cases;
  cin >> cases;
  for (int i = 0; i < cases; i++){
    supersticao SPT;
    cin >> cards;
    for(int k = 0; k < cards.length(); k++){
      if (cards[k] == 'A') SPT.A = true;
      else if (cards[k] == 'Q') SPT.Q = true;
      else if (cards[k] == 'J') SPT.J = true;
      else if (cards[k] == 'K') SPT.K = true;
    }
    if (SPT.Q && SPT.J && SPT.A && SPT.K) cout << "Aaah muleke\n";
    else cout << "Ooo raca viu\n";
  }
}

// https://www.beecrowd.com.br/judge/pt/problems/view/3093
// Ranking 00151º, Time 0.000, Submiss Date 11/06/2023 20:20:25 (C++17)