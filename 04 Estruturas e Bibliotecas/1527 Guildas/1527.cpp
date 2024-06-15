#include <bits/stdc++.h>

#define endl '\n'

using namespace std;

vector<int> points;
vector<int> pointsGd;
vector<int> id;
vector<int> sz;

int find(int p){
    return id[p] = (id[p] == p ? p : find(id[p]));
}

void uni(int p, int q){
    // Encontro os representantes de cada conjunto
    p = find(p); q = find(q);

    // Se p e q já pertencerem ao mesmo conjunto, não faço nada
    if (p == q) return;
    // Escolho o representante do menor conjunto como o novo representante
    if (sz[p] > sz[q]) swap(p, q);
    
    // Uno o conjunto e o tamanho aumenta;
    
    // Somo os pontos de cada guilda
    pointsGd[q] += pointsGd[p];

    id[p] = q; sz[q] += sz[p];
}


int main(){
    cin.tie(0)->sync_with_stdio(0);

    int n, m;
    while(cin >> n >> m){
        if (n == 0) break;
        int res = 0;

        points.resize(n);
        pointsGd.resize(n);
        id.resize(n); 
        sz.assign(n, 1);

        iota(id.begin(), id.end(), 0);
        for(int i = 0; i < n; i++){
            int p; cin >> p;
            points[i] = p;
            pointsGd[i] = p;
        }

        for(int i = 0; i < m; i++){
            int q, a, b;
            cin >> q >> a >> b;

            a--; b--;
            if (q == 1){
                uni(a, b);
            } else {
                int fa = find(a);
                int fb = find(b);
                int x = pointsGd[find(a)];
                int y = pointsGd[find(b)];

                int f0 = find(0);
                if (fa == f0 && x > y) res++;
                else if (fb == f0 && y > x) res++;
            }

        }

        cout << res << endl;
    }
}
