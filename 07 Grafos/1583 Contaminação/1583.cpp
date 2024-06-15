#include <bits/stdc++.h>

#define endl '\n'
#define ii pair<int, int>
#define f first
#define s second

using namespace std;

int n, m;
const int MAXS = 50;
char mat[MAXS][MAXS];

int di[] = {0, 0, 1, -1};
int dj[] = {1, -1, 0, 0};

void print_map(){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if (mat[i][j] == '@'){
                cout << 'T';
            } else {
                cout << mat[i][j];
            }
        }
        cout << endl;
    }
    cout << endl;
}

bool isvalid(int i, int j){
    return i >= 0 && i < n && j >= 0 && j < m;
}

void bfs(int i, int j){
    queue<ii> q;
    q.push(ii(i, j));
    mat[i][j] = '@';

    while(!q.empty()){
        ii cp = q.front(); q.pop();

        for(int k = 0; k < 4; k++){
            int ni = cp.f + di[k];
            int nj = cp.s + dj[k];

            if(isvalid(ni, nj) && mat[ni][nj] != '@' && mat[ni][nj] != 'X'){
                q.push(ii(ni, nj));
                mat[ni][nj] = '@';
            }
        }
    }
}

int main(){
    cin.tie(0)->sync_with_stdio(0);

    while(cin >> n >> m){
        if (n == 0 && m == 0) break;
        for(int i = 0; i < n; i++)
            for(int j = 0; j < m; j++)
                cin >> mat[i][j];

        for(int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                if (mat[i][j] == 'T'){
                    bfs(i, j);
                }
            }
        }

        print_map();
    }


}

