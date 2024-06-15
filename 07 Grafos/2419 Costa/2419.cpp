#include <bits/stdc++.h>

#define endl '\n'
#define ii pair<int, int>
#define f first
#define s second

using namespace std;

int n, m;
int res = 0;
const int MAXS = 1e3+10;
char mat[MAXS][MAXS];

int di[] = {0, 0, 1, -1};
int dj[] = {1, -1, 0, 0};

bool isvalid(int i, int j){
    return (i>=0 && i < n && j >= 0 && j < m);
}

bool iscoast(int i, int j){
    for(int k = 0; k < 4; k++){
        int ni = i + di[k];
        int nj = j + dj[k];

        if (mat[ni][nj] == '.' || !isvalid(ni, nj)) return true;
    }
    return false;
}

void bfs(int i, int j){
    queue<ii> q;
    q.push(ii(i,j));

    mat[i][j] = '@';
    if (iscoast(i, j)) res++;

    while(!q.empty()){
        ii pr = q.front(); q.pop();

        for(int k = 0; k < 4; k++){
            int ni = i + di[k];
            int nj = j + dj[k];

            if (isvalid(ni, nj) && mat[ni][nj] == '#'){
                q.push(ii(ni, nj));
                mat[ni][nj] = '@';

                if (iscoast(ni,nj)) res++;
            }
        } 
    } 
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    
    cin >> n >> m;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cin >> mat[i][j];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(mat[i][j] == '#'){
                bfs(i, j);
            }
        }
    }

    cout << res << endl;
}