#include <iostream>
#include <string>

using namespace std;

int main(){
  string name;
  bool isbolado = false;
  getline(cin, name);
  for(int i = 4; i < name.length(); i++){
    if ((name[i] == 'a' || name[i] == 'A') && (name[i-1] == 'd' || name[i-1] == 'D')
       && (name[i-2] == 'l' || name[i-2] == 'L') && (name[i-3] == 'e' || name[i-3] == 'E')
         && (name[i-4] == 'z' || name[i-4] == 'Z')){
        isbolado = true;
    }
  }
  if (isbolado) cout << "Link Bolado\n";
  else cout << "Link Tranquilo\n";
  
}

// https://www.beecrowd.com.br/judge/pt/problems/view/2651
// Ranking 00261º, Time 0.000, Submiss Date 09/06/2023 15:32:59 (C++17)