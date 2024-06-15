#include <iostream>
#include <string>

using namespace std;

int main(){
  cin.tie(0)->sync_with_stdio(0);
  string keyboard = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
  string str;
  while(getline(cin, str)){
    for (char chr : str){
      if (chr != ' '){
        size_t found = keyboard.find(chr);
        cout << keyboard[found-1];
      } else {
        cout << " ";
      }
    }
    cout << endl;
  }
}

// https://www.beecrowd.com.br/judge/pt/problems/view/1196
// Ranking 00337º, Time 0.078, Submiss Date 11/06/2023 22:28:30 (C++17)