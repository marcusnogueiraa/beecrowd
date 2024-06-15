# include <iostream>

using namespace std;

int main(){
  string line;
  while (cin >> line){
    int total = 16385;
    if (line.length() == 1) total = (line.at(0) - 64);
    else if (line.length() == 2) total = (line.at(1) - 64) + (line.at(0) - 64) * 26;
    else total = (line.at(2) - 64) + (line.at(1) - 64) * 26 + (line.at(0) - 64) * 676;
    
    if (total < 16385 and line.length() < 4) cout << total << endl;
    else cout << "Essa coluna nao existe Tobias!" << endl;
  }
}

// https://www.beecrowd.com.br/judge/pt/problems/view/3142
// Ranking 00215º, Time 0.860, Submiss Date 07/05/2023 21:47:32 (C++17)