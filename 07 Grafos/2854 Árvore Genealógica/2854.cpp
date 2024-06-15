#include <bits/stdc++.h>

#define vi vector<int>
#define endl '\n'

using namespace std;

const int MAXV = 300;
vector<vi> G(MAXV);
vector<bool> vis(MAXV);

void dfs(int n){
    vis[n] = true;

    for(auto w : G[n]) if (!vis[w]){
        dfs(w);
    }
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int m, n;
    cin >> m >> n;

    unordered_map<string, int> rt;  

    int idx = 0;
    for(int i = 0; i < n; i++){
        string p1, r, p2;
        cin >> p1 >> r >> p2;
        if (rt.count(p1) == 0) rt[p1] = idx++;
        if (rt.count(p2) == 0) rt[p2] = idx++;

        int a = rt[p1];
        int b = rt[p2];

        G[a].push_back(b);
        G[b].push_back(a);
    }

    int res = 0;
    for(int i = 0; i < m; i++) if (!vis[i]){
        dfs(i);
        res++;
    }

    cout << res << endl;
}