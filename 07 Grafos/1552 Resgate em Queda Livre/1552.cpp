#include <bits/stdc++.h>

#define endl '\n'
#define ii pair<int, int>
#define dd pair<double, double>
#define dii tuple<double, int, int>
#define f first
#define s second

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

double dist(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int c;
    cin >> c;

    while(c--){
        int n;
        cin >> n;
        vector<dd> ps(n);
        for(int i = 0; i < n; i++){
            double x, y; cin >> x >> y;
            ps[i] = {x, y};
        }

        vector<dii> G;
        for(int i = 0; i < n; i++){
            for(int j = i+1; j < n; j++){
                ii Pa = ps[i]; ii Pb = ps[j];
                double distance = dist(Pa.f, Pa.s, Pb.f, Pb.s);
                G.emplace_back(distance, i, j);
            }
        }

        id.resize(n);
        sz.assign(n, 1);
        iota(id.begin(), id.end(), 0);

        double d = 0;
        sort(G.begin(), G.end());
        for(auto [w, a, b] : G){
            if (find(a) != find(b)){
                uni(a, b);
                d += w;
            }
        }

        d = d / 100;

        cout << fixed << setprecision(2) << d << endl;

    }
}