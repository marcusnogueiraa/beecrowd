#include <iostream>
#include <cmath>

using namespace std;

int main(){
  int N;
  double garrafa, cuia;
  cin >> N >> garrafa >> cuia;
  string pessoas[N];
  for (int i = 0; i < N; i++) cin >> pessoas[i];
  int index = 0;
  while (true){
    if (round(garrafa*10) <= round(cuia*10)){ 
      cout << pessoas[index] << ' ' << garrafa << endl;
      break;
    } else {
      garrafa -= cuia;
      if (N == index + 1) index = 0;
      else index++;
    }
  }
  
}

// https://www.beecrowd.com.br/judge/pt/problems/view/3357
// Ranking 00203º, Time 0.000, Submiss Date 03/05/2023 00:48:40 (C++17)