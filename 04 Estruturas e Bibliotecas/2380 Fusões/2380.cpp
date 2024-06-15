#include <bits/stdc++.h>

#define endl '\n'

using namespace std;

int n, m;
vector<int> id, sz;

int find(int p){
    return id[p] = (id[p] == p ? p : find(id[p])); 
}

void uni(int p, int q){
    p = find(p);
    q = find(q);
    if (p == q) return;
    if (sz[p] > sz[q]) swap(p, q);
    id[p] = q; sz[q] += sz[p];
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    cin >> n >> m;

    id.resize(n);
    sz.assign(n, 0);
    iota(id.begin(), id.end(), 0);


    for(int i = 0; i < m; i++){
        char op; int a, b;
        cin >> op >> a >> b;
        a--; b--;
        if (op == 'C'){
            int x = find(a);
            int y = find(b);
            if (x == y) cout << "S" << endl;
            else cout << "N" << endl;
        } else {
            uni(a, b);
        }
    }
}