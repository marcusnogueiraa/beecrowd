#include <iostream>
#include <sstream>
#include <vector>
#include <iomanip>

using namespace std;

int main(){
  int cases;
  cin >> cases;
  cin.ignore();
  for(int i = 0; i < cases; i++){
    string name, line;
    getline(cin, name);
    getline(cin, line);
    istringstream iss(line);
    vector<double> vet;
    
    double element;
    while (iss >> element) vet.push_back(element);
      
    double res;
    if (vet.size() == 1) res = vet[0] / 2.0;
    else if (vet.size() == 2) res = (vet[0] + vet[1]) / 2.0;
    else if (vet.size() == 3) res = (vet[0] + vet[1] + vet[2]) / 3.0;
    else {
      double min_value = vet[0];
      int min_index = 0;
      for(int j = 1; j < 3; j++){
        if (vet[j] < min_value){
          min_value = vet[j];
          min_index = j;
        }
      }
      if (vet[3] > vet[min_index]) vet[min_index] = vet[3];
      res = (vet[0] + vet[1] + vet[2]) / 3.0;
    }

    cout << name << ": " << fixed << setprecision(1) << res << endl;
  }
  
}

// https://www.beecrowd.com.br/judge/pt/problems/view/3412
// Ranking 00021º, Time 0.000, Submiss Date 13/06/2023 20:39:58 (C++17)