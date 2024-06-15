#include <iostream>

using namespace std;

int main(){
  int cases;
  cin >> cases;
  for(int i = 0; i < cases; i++){
    int num;
    string tm;
    cin >> num >> tm;
    if (tm == "1t" && num<=45) cout << num << endl;
    else if (tm == "1t" && num>45) cout << num << "+" << num-45 << endl;
    else if (tm == "2t" && num<=90) cout << num << endl;
    else cout << num << "+" << num-90 << endl; 
  }
}

// https://www.beecrowd.com.br/judge/pt/problems/view/3422
// Ranking 00050º, Time 0.000, Submiss Date 09/06/2023 18:57:57 (C++17)