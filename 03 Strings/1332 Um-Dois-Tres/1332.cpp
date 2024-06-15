# include <iostream>

using namespace std;

int main(){
  int cases;
  string number;
  cin >> cases;
  for (int i = 0; i < cases; i++){
    cin >> number;
    if ((number[0] == 'o' and number[1] == 'n') or (number[1] == 'n' and number[2] == 'e') or (number[0] == 'o' and number[2] == 'e')){
      cout << "1" << endl;
    } else if (number.length() == 5){
      cout << "3" << endl;
    } else {
      cout << "2" << endl;
    }
  }
}

// https://www.beecrowd.com.br/judge/pt/problems/view/1332
// Ranking 03447º, Time 0.000, Submiss Date 17/04/2023 06:20:21 (C++17)