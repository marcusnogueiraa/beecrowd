#include <bits/stdc++.h>

#define endl '\n'
#define iii tuple<int, int, int>

using namespace std;

vector<int> id, sz;

int find(int p){
    return id[p] = (id[p] == p ? p : find(id[p]));
}

void uni(int p, int q){
    p = find(p); q = find(q);
    if(p == q) return;
    if(sz[p] > sz[q]) swap(p, q);
    id[p] = q; sz[q] += sz[p];
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n, m, t=1;
    while(cin >> n >> m){
        if (n == 0) break;
        vector<iii> G;
        for(int i = 0; i < m; i++){
            int a, b, w; cin >> a >> b >> w;
            a--; b--;
            G.emplace_back(w, a, b);
        }

        id.resize(n); sz.assign(n, 1);
        iota(id.begin(), id.end(), 0);

        sort(G.begin(), G.end());
        cout << "Teste " << t++ << endl;
        for(auto [w,a,b] : G){
            if(find(a) != find(b)){
                uni(a, b);
                if (a>b) swap(a,b);
                cout << a+1 << " " << b+1 << endl;
            }
        }

        cout << endl;

    }
}