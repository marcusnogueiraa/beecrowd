# include <iostream>
# include <vector>

using namespace std;

int main(){
  int n;
  vector<int> vec;
  cin >> n;
  for (int i = 0; i < n; i++){
    if (i == 0 or i == 1) vec.push_back(1);
    else vec.push_back(vec.at(i-1) + vec.at(i-2));
  }
  for (int i = n-1; i >= 0; i--){
    cout << vec.at(i);
    if (i != 0) cout << " ";
  }
  cout << endl;
}

// https://www.beecrowd.com.br/judge/pt/problems/view/2807
// Ranking 00773º, Time 0.000, Submiss Date 18/05/2023 16:46:32 (C++17)