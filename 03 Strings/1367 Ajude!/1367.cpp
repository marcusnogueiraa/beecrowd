#include <iostream>
#include <vector>
#include <map>
#include <set>

using namespace std;

int main(){
  cin.tie(0)->sync_with_stdio(0);
  int N, T, cases;
  string status;
  char id;
  cin >> cases;
  while (cases != 0){
    map<char, int> problemset;
    set<char> accs;
    int total = 0, concluded = 0;
    for (int i = 0; i < cases; i++){
      cin >> id >> T >> status;
      if (status == "correct" && accs.count(id) == 0){
        concluded++;
        total += T + problemset[id];
        accs.insert(id);
      } else{
        problemset[id] += 20;
      }
    }
    cout << concluded << " " << total << endl;
    cin >> cases;
  }

}

// https://www.beecrowd.com.br/judge/pt/problems/view/1367
// Ranking 00072º, Time 0.000, Submiss Date 13/06/2023 10:23:07 (C++17)