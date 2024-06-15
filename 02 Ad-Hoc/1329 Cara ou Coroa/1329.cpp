# include <iostream>

using namespace std;

int main(){
  int cases;
  cin >> cases;
  while(cases != 0){
    cin.ignore();
    string match;
    getline(cin, match);
    int mary = 0, john = 0;
    for(int k = 0; k < match.size(); k+=2){
      if (match.at(k) == '0') mary++;
      else john++;
    }
    cout << "Mary won " << mary << " times and John won " << john << " times\n";
    cin >> cases;
  }
}

// https://www.beecrowd.com.br/judge/pt/problems/view/1329
// Ranking 00387º, Time 0.000, Submiss Date 19/05/2023 10:26:11 (C++17)