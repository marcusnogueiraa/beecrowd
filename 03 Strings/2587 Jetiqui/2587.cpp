# include <iostream>

using namespace std;

int main(){
  int cases;
  cin >> cases;
  for (int i = 0; i < cases; i++){
    string name1;
    string name2;
    string palavra;

    cin >> name1;
    cin >> name2;
    cin >> palavra;
    int pos1 = -1, pos2 = -1;
    for (int i = 0; i < palavra.length(); i++){
      if (palavra[i] == '_' and pos1 == -1) pos1 = i;
      if (palavra[i] == '_' and pos1 != -1) pos2 = i;
    }
    if (name1[pos1] == name2[pos2] or name2[pos1] == name1[pos2]) cout << "Y" << endl;
    else if (name1[pos1] == name2[pos1] and name2[pos2] == name1[pos2]) cout << "Y" << endl;
    else cout << "N" << endl;
  }
  
}

// https://www.beecrowd.com.br/judge/pt/problems/view/2587
// Ranking 00612º, Time 0.000, Submiss Date 20/04/2023 11:02:44 (C++17)