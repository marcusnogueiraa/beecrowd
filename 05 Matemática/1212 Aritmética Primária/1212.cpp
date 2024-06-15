#include <iostream> 

using namespace std;

int chartodec(char chr){
  return chr - '0';
}

int main(){
  cin.tie(0)->sync_with_stdio(0);
  string N1, N2;
  cin >> N1 >> N2;
  while(N1 != "0" || N2 != "0"){
    int carrys = 0;
    int carry_v = 0;
    // 545655 
    //  55578
    if (N1.length() > N2.length()){
      int difference = N1.length() - N2.length();
      N2.insert(0, difference, '0');
    }
    if (N2.length() > N1.length()){
      int difference = N2.length() - N1.length();
      N1.insert(0, difference, '0');
    }
    for(int i = N1.length() - 1; i >= 0; i--){
      if ((carry_v + chartodec(N1[i]) + chartodec(N2[i])) > 9){
        carrys++;
        if (carry_v == 0) carry_v++;
      }
      else carry_v = 0;
    }

    if (carrys == 0){
      cout << "No carry operation.\n";
    } else if (carrys == 1){
      cout << "1 carry operation.\n";
    } else {
      cout << carrys << " carry operations.\n";
    }

    cin >> N1 >> N2;
  }
}

// https://www.beecrowd.com.br/judge/pt/problems/view/1212
// Ranking 01481º, Time 0.031, Submiss Date 09/06/2023 13:12:58 (C++17)