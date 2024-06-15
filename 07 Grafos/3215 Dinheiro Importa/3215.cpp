#include <bits/stdc++.h>

#define vi vector<int>
#define vii vector<pair<int, int>
#define ii pair<int, int>
#define pb push_back
#define ll long long
#define endl '\n'

using namespace std;

const int MAXV = 1e5+100;
vector<vi> G(MAXV);
vector<bool> vis(MAXV);
vector<ll> divd(MAXV);

ll bfs(int s){
    ll tt = divd[s];
    queue<int> q;
    q.push(s);
    vis[s] = true;

    while(!q.empty()){
        int v = q.front(); q.pop();

        for(auto w : G[v]) if (!vis[w]){
            vis[w] = true;
            q.push(w);
            tt += divd[w];
        }
    }

    return tt;
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n, m;
    cin >> n >> m;

    for(int i = 0; i < n; i++) cin >> divd[i];

    for(int i = 0; i < m; i++){
        int a, b; cin >> a >> b;
        G[a].pb(b);
        G[b].pb(a);
    }

    for(int i = 0; i < n; i++) if (!vis[i]){
        ll tt = bfs(i);
        if (tt != 0){
            cout << "IMPOSSIBLE" << endl;
            return 0;
        }
    }

    cout << "POSSIBLE" << endl;
    

}