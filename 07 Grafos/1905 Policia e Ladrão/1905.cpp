#include <bits/stdc++.h>

#define endl '\n'

using namespace std;

int di[] = {0, 0, 1, -1};
int dj[] = {1, -1, 0, 0};

bool inside(int i, int j){
    if (i >= 0 && i < 5 && j>= 0 && j < 5) return true;
    return false;
}

void dfs(int i, int j, int mat[5][5]){
    mat[i][j] = 1;

    for(int k = 0; k < 5; k++){
        int ni = i + di[k];
        int nj = j + dj[k];

        if (inside(ni, nj) && mat[ni][nj] == 0){
            dfs(ni, nj, mat);
        }
    }
    
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin >> t;

    while(t--){
        int mat[5][5];

        for(int i = 0; i < 5; i++){
            for(int j = 0; j < 5; j++){
                cin >> mat[i][j];
            }
        }

        dfs(0, 0, mat);

        if (mat[4][4] == 0) cout << "ROBBERS" << endl;
        else cout << "COPS" << endl;
    }
}