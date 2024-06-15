#include <iostream>

#define ll long long

using namespace std;

ll fat[30], tam_fat = 1;

ll anagrams(string str){
  fat[1] = 1;
  if (str.size() > tam_fat){
    for(int i = tam_fat+1; i <= str.size(); i++){
      fat[i] = (fat[i-1] * i);
      tam_fat++;
    }
  }
  return fat[str.size()];
}

int main(){
  cin.tie(0)->sync_with_stdio(0);
  string str;
  cin >> str;
  while (str != "0"){
    cout << anagrams(str) << endl;
    cin >> str;
  }
}

// https://www.beecrowd.com.br/judge/pt/problems/view/1980
// Ranking 01061º, Time 0.000, Submiss Date 31/05/2023 19:13:51 (C++17)