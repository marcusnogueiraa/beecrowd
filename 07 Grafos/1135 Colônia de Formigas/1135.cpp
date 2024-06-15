#include <bits/stdc++.h>

#define endl '\n'
#define ll long long

using namespace std;

int n, l, timer = 0;
vector<int> tin, tout; 
vector<ll> distn;
vector<vector<int>> up;
vector<vector<pair<int, int>>> G;

void dfs(int s, int par){
    tin[s] = ++timer;
    up[s][0] = par;
 
    for(int i = 1; i <= l; i++){
        up[s][i] = up[up[s][i-1]][i-1];
    }

    for(auto [to, w] : G[s]) {
        if (to != par){
            distn[to] = distn[s] + w;
            dfs(to, s);
        }
    }


    tout[s] = ++timer;
}

bool is_ancestor(int u, int v){
    return tin[u] <= tin[v] && tout[u] >= tout[v];
}

int lca(int u, int v){
    if (is_ancestor(u, v)) return u;
    else if (is_ancestor(v, u)) return v;
 
    for(int i = l; i >= 0; i--){
        if (!is_ancestor(up[u][i], v)){
            u = up[u][i];
        }
    }
 
    return up[u][0];
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    while(cin >> n){
        if (n == 0) return 0;

        timer = 0;
        G.resize(n);
        l = ceil(log2(n));
        tin.assign(n, 0); tout.assign(n, 0);
        up.assign(n, vector<int>(l+1));
        distn.assign(n, 0);

        for(int i = 1; i <= n-1; i++){
            int Ai, Li;
            cin >> Ai >> Li;
            G[i].push_back({Ai, Li});
            G[Ai].push_back({i, Li});
        }

        int q;
        cin >> q;

        dfs(0, 0);

        for(int i = 0; i < q; i++){
            int s, t;
            cin >> s >> t;

            cout << distn[s] + distn[t] - (2 * distn[lca(s, t)]);

            if (i != q-1) cout << " ";
            else cout << endl; 
        }
        G.clear();
    }
}