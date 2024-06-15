# include <iostream>

using namespace std;

int main(){
  long long int num1, num2;
  while(cin >> num1 >> num2){
    long int dif = num1 - num2;
    if (dif < 0) dif *= -1;
    cout << dif << ' ' << endl;
  }
}

// https://www.beecrowd.com.br/judge/pt/problems/view/1198
// Ranking 04096º, Time 0.637, Submiss Date 07/05/2023 22:23:43 (C++17)