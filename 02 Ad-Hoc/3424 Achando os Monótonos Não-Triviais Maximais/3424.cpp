# include <iostream>

using namespace std;

int main(){
  int N, tt = 0;
  bool as_sqc = false;
  string sqc;
  cin >> N;
  cin >> sqc;
  for (int i = 0; i < N; i++){
    if (sqc[i] == 'a' and not as_sqc){
      if (sqc[i+1] == 'a') tt++;
      as_sqc = true;
    }
    else if (sqc[i] == 'a' and as_sqc){
      tt++;
    }
    else  as_sqc = false;
  
  }
  
  cout << tt << endl;
}

// https://www.beecrowd.com.br/judge/pt/problems/view/3424
// Ranking 00014º, Time 0.000, Submiss Date 29/05/2023 03:58:58 (C++17)