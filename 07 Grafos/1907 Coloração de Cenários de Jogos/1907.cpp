#include <bits/stdc++.h>

#define endl '\n'
#define ii pair<int, int>
#define f first
#define s second
#define ll long long

using namespace std;

int n, m;

const int MAXS = 1050;
char mat[MAXS][MAXS];

int di[] = {0, 0, 1, -1};
int dj[] = {1, -1, 0, 0};

bool isposs(int i, int j){
    return i >= 0 && i < n && j >= 0 && j < m; 
}

void bfs(int i, int j){
    queue<ii> q;
    mat[i][j] = 'o';
    q.push(ii(i, j));

    while(!q.empty()){
        ii cp = q.front(); q.pop();

        for(int i = 0; i < 4; i++){
            int ni = cp.f + di[i];
            int nj = cp.s + dj[i];

            if (isposs(ni, nj) && mat[ni][nj] != 'o'){
                q.push(ii(ni, nj));
                mat[ni][nj] = 'o';
            }
        }
    }
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    cin >> n >> m;

    for(int i = 0; i < n ; i++)
        for(int j = 0; j < m; j++)
            cin >> mat[i][j];

    int res = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if (mat[i][j] != 'o'){
                bfs(i, j);
                res++;
            }
        }
    }

    cout << res << endl;
}