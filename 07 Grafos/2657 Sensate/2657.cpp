#include <bits/stdc++.h>

#define endl '\n'
#define ii pair<int, int>

using namespace std;

int n, m, q;
vector<int> id, sz;
vector<int> maxrateCluster;
vector<int> rates;

int find(int p){
    return id[p] = (id[p] == p ? p : find(id[p]));
}

void uni(int p, int q){
    p = find(p); q = find(q);

    if (p == q) return;

    if (sz[p] > sz[q]) swap(p, q);
    
    if (maxrateCluster[p] > maxrateCluster[q]) maxrateCluster[q] = maxrateCluster[p];
    id[p] = q; sz[q] += sz[p];
}

bool can_compete(int p){
    int q = p;
    p = find(p);

    if (sz[p] == 1){
        return true;
    } else {
        if (rates[q] >= 5){
            return true;
        } else if (maxrateCluster[p] <= 5){
            return true;
        }
    }

    return false;
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    cin >> n >> m >> q;
    unordered_map<string, int> sti;
    int ind = 0;

    id.resize(n);
    rates.resize(n);
    sz.assign(n, 1);
    maxrateCluster.resize(n);

    iota(id.begin(), id.end(), 0);

    for(int i = 0; i < n; i++){
        string name; int rate;
        cin >> name >> rate;
        rates[ind] = rate;
        maxrateCluster[ind] = rate;
        sti[name] = ind++;
    }

    for(int i = 0; i < m; i++){
        string p1, p2;
        cin >> p1 >> p2;
        uni(sti[p1], sti[p2]);
    }

    for (int i = 0; i < q; i++){
        string p;
        cin >> p;
        if (can_compete(sti[p])){
            cout << "S" << endl;
        } else {
            cout << "N" << endl;
        }
    }
}