#include <iostream>

using namespace std;

int main(){
  cin.tie(0)->sync_with_stdio(0);
  int N;
  string str;
  cin >> N;
  for(int i = 0; i < N; i++){
    cin >> str;
    if (i != 0){
      cout << " ";
    }
    if (str[0] == 'O' && str[1] == 'B' && str.length() == 3){
      cout << "OBI";
    }
    else if (str[0] == 'U' && str[1] == 'R' && str.length() == 3){
      cout << "URI";
    } else {
      cout << str;
    }
  }
  cout << endl;
}

// https://www.beecrowd.com.br/judge/pt/problems/view/2062
// Ranking 01148º, Time 0.000, Submiss Date 27/06/2023 10:28:20 (C++17)