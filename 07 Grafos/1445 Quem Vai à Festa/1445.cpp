#include <bits/stdc++.h>

#define endl '\n'

using namespace std;

int res;

void dfs(int s, vector<vector<int>>& G, vector<bool>& vis){
    vis[s] = true;
    res++;

    for(auto w : G[s]) if (!vis[w]){
        dfs(w, G, vis);
    }
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n;
    while(scanf("%d", &n) != EOF){
        if (n == 0) break;

        res = 0;

        vector<vector<int>> G(1000, vector<int>());
        vector<bool> vis(1000, false);

        for(int i = 0; i < n; i++){
            int x, y;
            scanf(" (%d,%d)", &x, &y);
            x--; y--;

            G[x].push_back(y);
            G[y].push_back(x);
        }

        dfs(0, G, vis);

        cout << res << endl;
    }
}