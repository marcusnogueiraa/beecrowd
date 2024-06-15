#include <iostream>
#include <string>

using namespace std;

int main(){
  string str;
  while(getline(cin, str)){
    bool b = false;
    bool i = false;
    for(int i = 0; i < str.length(); i++){
      if (str[i] == '_'){
        if (i) cout << "</i>";
        else cout << "<i>";
        i = !i;
      } else if (str[i] == '*'){
        if (b) cout << "</b>";
        else cout << "<b>";
        b = !b;        
      } else {
        cout << str[i];
      }
    }
    cout << endl;
  }
}

// https://www.beecrowd.com.br/judge/pt/problems/view/1239
// Ranking 01703º, Time 0.113, Submiss Date 13/06/2023 14:06:11 (C++17)