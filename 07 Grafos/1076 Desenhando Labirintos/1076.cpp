#include <bits/stdc++.h>

#define endl '\n'
#define vi vector<int>

using namespace std;

int res = 0;

void dfs(int s, vector<vi>& G, vector<bool>& vis){
    vis[s] = true;
    res++;

    for (auto w : G[s]) if (!vis[w]){
        dfs(w, G, vis);
    }
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin >> t;
    while (t--){
        res = 0;
        int n; cin >> n;
        int v, a;
        cin >> v >> a;
        vector<vi> G(v);
        vector<bool> vis(v);
        for(int i = 0; i < a; i++){
            int a1, b1;
            cin >> a1 >> b1;
            G[a1].push_back(b1);
            G[b1].push_back(a1);
        }
        dfs(n, G, vis);

        cout << (res-1)*2 << endl;
    }

}