#include <bits/stdc++.h>

#define endl '\n'
#define ii pair<int, int>
#define iii tuple<int, int, int>
#define vii vector<pair<int, int>>
#define ll long long

using namespace std;

vector<int> id, sz;

int find(int p){
    return id[p] = (id[p] == p ? p : find(id[p]));
}

void uni(int p, int q){
    p = find(p); q = find(q);
    if(p == q) return;
    if (sz[p] > sz[q]) swap(p, q);
    id[p] = q; sz[q] += sz[p];
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n, m;
    while(1){
        cin >> n >> m;
        if (n == 0 && m == 0) break;
        
        vector<iii> G;

        id.resize(n);
        sz.assign(n, 1);
        iota(id.begin(), id.end(), 0);  
        
        for(int i = 0; i < m; i++){
            int a, b, w;
            cin >> a >> b >> w;
            G.emplace_back(w, a, b);
        }

        ll res = 0;
        sort(G.begin(), G.end());
        for(auto [w,a,b]:G){
            if (find(a) != find(b)){
                uni(a, b);
                res += w;
            }
        }

        cout << res << endl;
    }
}