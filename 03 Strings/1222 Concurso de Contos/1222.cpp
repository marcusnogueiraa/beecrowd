#include <iostream>
#include <vector>

using namespace std;

int main(){
  string str;
  int N, L, C;
  while (cin >> N >> L >> C){
    vector<string> strs;
    int pages = 0, lines = 0, chars = 0;
    for(int i = 0; i < N; i++){
      cin >> str;
      strs.push_back(str);
    }
    chars = strs[0].length();
    for(int i = 1; i < N; i++){
      if (chars + strs[i].length() + 1 <= C){
        chars += strs[i].length() + 1;
      } else {
        lines+=1;
        chars = 0;
      }
    }
    if (chars > 0) lines++;
    cout << (lines/L) + (lines%L) << endl;
  }
}

// https://www.beecrowd.com.br/judge/pt/problems/view/1222
// Ranking 00175º, Time 0.000, Submiss Date 13/06/2023 12:03:09 (C++17)