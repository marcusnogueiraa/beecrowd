#include <bits/stdc++.h>

#define ii pair<int, int>
#define endl '\n'

using namespace std;

int di[] = {0, 0, 1, -1};
int dj[] = {1, -1, 0, 0};

int infec;
int n, m, x, y;
const int MAXS = 110;
int mat[MAXS][MAXS];

bool isvalid(int i, int j){
    return i >= 0 && i < n && j >= 0 && j < m && mat[i][j] != -1; 
}

int BFS(int i, int j){
    int days = 0;
    if (mat[i][j] == 1) infec--;
    mat[i][j] = -1;
    queue<ii> q;
    q.push({i, j});

    if (infec == 0) return days;

    while(!q.empty()){
        i = q.front().first;
        j = q.front().second;

        q.pop();

        days++;
        for (int k = 0; k < 4; k++){
            int ni = i + di[k];
            int nj = j + dj[k];

            if (isvalid(ni, nj)){
                if (mat[ni][nj] == 1) infec--;
                mat[ni][nj] = -1;
                q.push({ni, nj});
            }

            if (infec == 0) return days;
        }
    }

    return days;
}

int main(){
    int t; cin >> t;
    while(t--){
        cin >> n >> m;
        infec = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cin >> mat[i][j];
                if (mat[i][j] == 1) infec++;
            }
        }

        cin >> x >> y;

        int days = BFS(x, y);
        cout << days << endl;
    }
}
