# include <iostream>
# include <cstring>

using namespace std;

int main(){
  int J, R, points;
  cin >> J >> R;
  int players[J];

  memset(players, 0, sizeof(int) * J);

  for(int i = 0; i < R*J; i++){
    cin >> points;
    players[i%J] += points;
  }

  int m_index = 0, m_value = players[0];
  for (int i = 1; i < J; i++){
    if (players[i] >= m_value){
      m_index = i;
      m_value = players[i];
    }
  }

  cout << m_index+1 << endl;

}

// https://www.beecrowd.com.br/judge/pt/problems/view/1940
// Ranking 00759º, Time 0.106, Submiss Date 25/05/2023 23:51:41 (C++17)