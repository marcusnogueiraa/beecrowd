# include <iostream>
# include <set>

using namespace std;

int main(){
  set<string> pomekons;
  int cases;
  string pomekon;
  cin >> cases;
  for (int i = 0; i < cases; i++){
    cin >> pomekon;
    pomekons.insert(pomekon);
  }
  cout << "Falta(m) "<< 151 - pomekons.size() << " pomekon(s).\n";
}

// https://www.beecrowd.com.br/judge/pt/problems/view/2174
// Ranking 01286º, Time 0.000, Submiss Date 23/05/2023 14:45:05 (C++17)
