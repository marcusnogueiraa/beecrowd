# include <iostream>
# include <string>

using namespace std;

int main(){
  int cases;
  cin >> cases;
  for (int i = 0; i < cases; i++){
    string line;
    cin >> line;
    if (line == "P=NP") cout << "skipped\n";
    else {
      int pos = line.find("+");;
      int v1 = stoi(line.substr(0, pos));
      int v2 = stoi(line.substr(pos+1));
      cout << v1+v2 << endl;
    }
  }
}

// https://www.beecrowd.com.br/judge/pt/problems/view/3170
// Ranking 00105º, Time 0.000, Submiss Date 29/04/2023 13:30:23 (C++17)