#include <iostream>

using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n, k, ind=1;
    do {
        cin >> n;
        for (int i = 0; i < n; i++){
            cin >> k;
            if (i+1 == k){
                cout << "Teste " << ind << endl;
                cout << k << endl << endl;
            }
        }
        ind++;
    } while(n != 0);
}

// https://www.beecrowd.com.br/judge/pt/problems/view/2189
// Ranking 00285º, Time 0.000, Submiss Date 05/09/2023 00:01:30 (C++20)