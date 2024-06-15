#include <bits/stdc++.h>

#define endl '\n'
#define ii pair<int, int>
#define iii tuple<int, int, int>
#define vii vector<pair<int, int>>
#define ll long long

using namespace std;

const int MAX = 1e3+10;

vector<int> id, sz;

bool lambda(iii a, iii b){
    return get<0>(a) > get<0>(b);
}

int find(int p){
    return id[p] = (id[p] == p ? p : find(id[p]));
}

void uni(int p, int q){
    p = find(p); q = find(q);
    if (p == q) return;
    if (sz[p] > sz[q]) swap(p, q);
    id[p] = q; sz[q] += sz[p];
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int m;
    cin >> m;
    vector<iii> G;

    id.resize(MAX);
    sz.assign(MAX, 1);
    iota(id.begin(), id.end(), 0);

    for(int i = 0; i < m; i++){
        int a, b, w; cin >> a >> b >> w;
        a--; b--;
        G.emplace_back(w, a, b);
    }

    vector<int> idAux = id;
    vector<int> szAux = sz;

    sort(G.begin(), G.end(), lambda);
    ll maxC = 0;
    for(auto [w,a,b] : G){
        if (find(a) != find(b)){
            uni(a, b);
            maxC += w;
        }
    }
    cout << maxC << endl;

    id = idAux; sz = szAux;

    sort(G.begin(), G.end());
    ll minC = 0;
    for(auto [w,a,b] : G){
        if (find(a) != find(b)){
            uni(a, b);
            minC += w;
        }
    }
    cout << minC << endl;

}