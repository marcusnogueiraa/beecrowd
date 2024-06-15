# include <iostream>
# include <vector>
# include <algorithm>

using namespace std;

int main(){
  int L;
  while (cin >> L) {
    vector<int> lesmas(L);
    for (int i = 0; i < L; i++){
      cin >> lesmas[i];
    }
    int melhor_lesma = *max_element(lesmas.begin(), lesmas.end());

    if (melhor_lesma < 10) cout << "1" << endl;
    else if (melhor_lesma >= 10 and melhor_lesma < 20) cout << "2" << endl;
    else cout << "3" << endl;
  }
}

// https://www.beecrowd.com.br/judge/pt/problems/view/1564
// Ranking 01789º, Time 0.028, Submiss Date 19/04/2023 19:12:41    (C++17)