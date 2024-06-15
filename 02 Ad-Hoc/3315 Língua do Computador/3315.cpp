#include <iostream>
#include <string>

using namespace std;

string dectobin(int num){
  string bin = "";
  while(num > 0){
    int bit = num % 2;
    bin = to_string(bit) + bin;
    num /= 2;
  }
  return bin;
}

int main(){
  int s1 = 0, s2 = 0, s3 = 0, s4 = 0, v;
  int bs = 0;
  for(int i = 0; i < 7; i++){
    cin >> v;
    s1+=v;
  }
  if (s1 > bs) bs = s1;
  for(int i = 0; i < 7; i++){
    cin >> v;
    s2+=v;
  }
  if (s2 > bs) bs = s2;
  for(int i = 0; i < 7; i++){
    cin >> v;
    s3+=v;
  }
  if (s3 > bs) bs = s3;
  for(int i = 0; i < 7; i++){
    cin >> v;
    s4+=v;
  }
  if (s4 > bs) bs = s4;
  cout << bs << " = " << dectobin(bs) << endl;
}

// https://www.beecrowd.com.br/judge/pt/problems/view/3315
// Ranking 00096º, Time 0.000, Submiss Date 09/06/2023 19:18:45 (C++17)