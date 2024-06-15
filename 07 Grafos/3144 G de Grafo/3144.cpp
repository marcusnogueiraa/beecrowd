#include <bits/stdc++.h>

#define endl '\n'
#define iii tuple<int, int, int>

using namespace std;

vector<iii> E;
vector<int> id, sz;

int find(int p){
    return id[p] = (id[p] == p ? p : find(id[p]));
}

void uni(int p, int q){
    p = find(p), q = find(q);
    if (p == q) return;
    if (sz[p] > sz[q]) swap(p, q);
    id[p] = q; sz[q] += sz[p];
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n, m, o;
    cin >> n >> m;
    cin >> o;
    id.resize(n);
    sz.assign(n, 1);
    iota(id.begin(), id.end(), 0);

    for(int i = 0; i < m; i++){
        int w, a, b; cin >> a >> b >> w;
        E.emplace_back(w, --a, --b);
    }

    sort(E.begin(), E.end());

    int res = 0;
    for(auto [w, a, b] : E){
        if (find(a) != find(b)){
            uni(a, b);
            res += w;
        }
    }

    cout << 2*res << endl;
}