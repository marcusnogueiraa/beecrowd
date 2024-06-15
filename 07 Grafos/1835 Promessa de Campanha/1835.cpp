#include <bits/stdc++.h>

#define endl '\n'
#define pb push_back
#define vi vector<int>

using namespace std;

void dfs(int s, vector<vi>& G, vector<bool>& vis){
    vis[s] = true;

    for(auto w : G[s]) if (!vis[w]){
        dfs(w, G, vis);
    }
}

int main(){
    cin.tie(0)->sync_with_stdio(0);

    int t;
    cin >> t;
    for(int tt = 1; tt <= t; tt++){
        int n, m;

        cin >> n;
        cin >> m;
        vector<vi> G(n);
        vector<bool> vis(n);

        for(int i = 0; i < m; i++){
            int a, b; cin >> a >> b;
            a--; b--;

            G[a].pb(b);
            G[b].pb(a);
        }

        int res = 0;
        for(int i = 0; i < n; i++) if (!vis[i]){
            dfs(i, G, vis);
            res++;
        }

        res--;
        cout << "Caso " << "#" << tt << ": ";
        if (res == 0){
            cout << "a promessa foi cumprida" << endl;
        } else {
            cout << "ainda falta(m) " << res << " estrada(s)" << endl;
        }


    }
}