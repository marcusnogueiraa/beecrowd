# include <iostream>
# include <iomanip>
# include <cmath>

using namespace std;

int main(){
  string content;
  double value = 0;
  while (getline(cin, content)){
    if (content == "caw caw"){
      cout << fixed << setprecision(0) << value << endl; 
      value = 0;
    } else {
        if (content.at(0) == '*') value = value + pow(2, 2);
        if (content.at(1) == '*') value = value + pow(2, 1);
        if (content.at(2) == '*') value = value + pow(2, 0);
    }
  }
}

// https://www.beecrowd.com.br/judge/pt/problems/view/1848
// Ranking 02967º, Time 0.000, Submiss Date 27/04/2023 19:14:27 (C++17)