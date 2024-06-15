#include <bits/stdc++.h>

#define endl '\n'
#define pii pair<int, int>

using namespace std;

int n, m;
const int MAXS = 1e3+100;
int mat[MAXS][MAXS];

void bfs(int i, int j){
    queue<pii> q;
    pii crt(i, j);
    q.push(crt);
    mat[i][j] = 0;

    while(!q.empty()){
        crt = q.front(); q.pop();
        i = crt.first;
        j = crt.second;

        if (i < n-1 && mat[i+1][j] == 1){
            crt.first = i+1;
            crt.second = j;
            q.push(crt);
            mat[i+1][j] = 0;
        }
        if (i > 0 && mat[i-1][j] == 1){
            crt.first = i-1;
            crt.second = j;
            q.push(crt);
            mat[i-1][j] = 0;
        }
        if (j < m-1 && mat[i][j+1] == 1){
            crt.first = i;
            crt.second = j+1;
            q.push(crt);
            mat[i][j+1] = 0;
        }
        if (j > 0 && mat[i][j-1] == 1){
            crt.first = i;
            crt.second = j-1;
            q.push(crt);
            mat[i][j-1] = 0;
        }
    }
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> mat[i][j];
        }
    }

    int res = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if (mat[i][j] == 1){
                bfs(i, j);
                res++;
            }
        }
    }

    cout << res << endl;
}