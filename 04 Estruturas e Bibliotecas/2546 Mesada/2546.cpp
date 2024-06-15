#include <bits/stdc++.h>

#define endl '\n'
#define ll long long

using namespace std;

const int neutral = numeric_limits<int>::min();

struct Node {
    int maxV;
    int index;
};

int n, q;
vector<Node> seg;
vector<int> vet, lazy;

void up_lazy(int p, int l, int r){
    seg[p].maxV += lazy[p];
    if (l != r){
        lazy[2*p] += lazy[p];
        lazy[2*p+1] += lazy[p];
    }
    lazy[p] = 0;
}

Node join(Node n1, Node n2){
    if (n1.maxV != n2.maxV){
        if (n1.maxV > n2.maxV) return n1;
        else return n2; 
    } else {
        if (n1.index < n2.index) return n1;
        else return n2;
    }
}

Node build(int p, int l, int r){
    if (l == r) return seg[p] = {vet[l], l};
    int m = (l+r)/2;
    return seg[p] = join(build(2*p, l, m), build(2*p+1, m+1, r));
}

Node query(int a, int b, int p, int l, int r){
    up_lazy(p, l, r);
    if (a > r || b < l) return {neutral, n};
    if (l >= a && r <= b) return seg[p];
    int m = (l+r)/2;
    return join(query(a, b, 2*p, l, m), query(a, b, 2*p+1, m+1, r));
}

Node update(int val, int a, int b, int p, int l, int r){
    up_lazy(p, l, r);
    if (a > r || b < l) return seg[p];
    if (l >= a && r <= b){
        lazy[p] += val;
        up_lazy(p, l, r);
        return seg[p];
    }
    int m = (l+r)/2;
    return seg[p] = join(update(val, a, b, 2*p, l, m), update(val, a, b, 2*p+1, m+1, r));
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    while(cin >> n >> q){
        vet.resize(n);
        seg.resize(4*n);
        lazy.assign(4*n, 0);

        for(int i = 0; i < n; i++) cin >> vet[i];

        build(1, 0, n-1);

        for(int i = 0; i < q; i++){
            char op;
            int a, b, v;
            cin >> op;

            if (op == 'C'){
                cin >> a >> b;
                Node res = query(--a, --b, 1, 0, n-1);
                cout << res.index+1 << endl;
            } else {
                cin >> a >> b >> v;
                update(v, --a, --b, 1, 0, n-1);
            }
        }
    }
}