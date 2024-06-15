#include <bits/stdc++.h>

#define endl '\n'
#define vi vector<int>

using namespace std;

int res = 0;

void dfs(int s, vector<vi>& G, vector<bool>& vis){
    vis[s] = true;

    res++;
    for(auto w : G[s]) if (!vis[w]){
        dfs(w, G, vis);
    }
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n, m;
    
    while(cin >> n >> m){
        res = 0;
        vector<vi> G(n);
        vector<bool> vis(n);

        for(int i = 0; i < m; i++){
            int a, b; cin >> a >> b; a--; b--;
            G[a].push_back(b);
            G[b].push_back(a);
        }

        int t; cin >> t; t--;
        dfs(t, G, vis);

        cout << res << endl;
    }

}