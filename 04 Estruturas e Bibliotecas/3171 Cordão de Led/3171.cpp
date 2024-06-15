#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> G;
vector<bool> vis;

void dfs(int s){
    vis[s] = true;
    for(auto w : G[s]) if (!vis[w]){
        dfs(w);
    }
} 

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n, l;
    cin >> n >> l;
    G.resize(n);
    vis.resize(n);
    for(int i = 0; i < l; i++){
        int x, y;
        cin >> x >> y;
        x--; y--;

        G[x].push_back(y);
        G[y].push_back(x);
    }

    dfs(0);
    for(int i = 1; i < n; i++) if (!vis[i]){
        cout << "INCOMPLETO" << endl; 
        return 0;
    }

    cout << "COMPLETO" << endl;
}