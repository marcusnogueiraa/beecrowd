#include <bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n, m;
    cin >> n >> m;
    int mat[n][m];
    
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> mat[i][j];
            
    int maior = 0, tot;
    for (int i = 0; i < n; i++){
        tot = 0;
        for (int j = 0; j < m; j++){
            tot += mat[i][j];
        }
        if (tot > maior) maior = tot;
    }
    for (int j = 0; j < m; j++){
        tot = 0;
        for (int i = 0; i < n; i++){
            tot += mat[i][j];
        }
        if (tot > maior) maior = tot;
    }
    cout << maior << endl;
    
}

// https://www.beecrowd.com.br/judge/pt/problems/view/2293
// Ranking 00365º, Time 0.000, Submiss Date 05/09/2023 15:53:26 (C++20)