#include <iostream>

using namespace std;

int main(){
  cin.tie(0)->sync_with_stdio(0);
  string num;
  while(cin >> num){
    int regist[] = {0,0,0,0,0,0,0,0,0,0};
    for (char digit : num) regist[digit - '0']++;
    
    int biggerNum = 0;
    for (int i = 0; i < 10; i++){
      if (regist[i] >= regist[biggerNum]) biggerNum = i;
    }

    cout << biggerNum << endl;
  }
}

// https://www.beecrowd.com.br/judge/pt/problems/view/2138
// Ranking 00629º, Time 0.000, Submiss Date 19/07/2023 01:18:39 (C++17)