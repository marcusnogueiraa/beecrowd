#include <bits/stdc++.h>

#define endl '\n'
#define ll long long

using namespace std;
int n, m, p;

vector<vector<bool>> g;
vector<vector<bool>> poss;

void floyd_warshall(){
    for(int i = 0; i < n; i++){
        poss[i][i] = true;
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            poss[i][j] = g[i][j]; 
        }
    }

    for(int k = 0; k < n; k++){
        for(int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                if (poss[i][k] && poss[k][j]){
                    poss[i][j] = true;
                }
            }
        }
    }
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    cin >> n >> m >> p;
    g.assign(n, vector<bool>(n, false));
    poss.assign(n, vector<bool>(n, false));

    for(int i = 0; i < m; i++){
        int a, b; cin >> a >> b;
        a--; b--;

        g[a][b] = true;
        g[b][a] = true; 
    }

    floyd_warshall();

    for(int i = 0; i < p; i++){
        int a, b; cin >> a >> b; a--; b--;

        if (poss[a][b]) cout << "Lets que lets" << endl;
        else cout << "Deu ruim" << endl;
    }
}

