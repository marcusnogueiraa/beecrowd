# include <iostream>

# define MIN(a, b) ((a) < (b) ? (a) : (b));
# define MAX(a, b) ((a) > (b) ? (a) : (b));

using namespace std;

int main(){
  int N;
  cin >> N;
  string str1, str2;

  for (int k = 0; k < N; k++){
    cin >> str1 >> str2;
    int menor = MIN(str1.length(), str2.length())
    int maior = MAX(str1.length(), str2.length())
    bool str1_maior = false;
    if (maior == str1.length()) str1_maior = true;
    for (int i = 0; i < menor; i++){
      cout << str1[i] << str2[i];
    }
    if (str1_maior) {
      for (int i = menor; i < maior; i++){
        cout << str1[i];
      }
    } else{
      for (int i = menor; i < maior; i++){
        cout << str2[i];
      }
    } 

    cout << endl;
  }
}

// https://www.beecrowd.com.br/judge/pt/problems/view/1238
// Ranking 04224º, Time 0.161, Submiss Date 03/05/2023 20:24:12 (C++17)