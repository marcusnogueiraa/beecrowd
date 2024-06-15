#include <bits/stdc++.h>

#define endl '\n'
#define ll long long

using namespace std;

vector<ll> seg, lazy;

void propag(int p, int l, int r){
    seg[p] += (ll) (r-l+1)*lazy[p];
    if (l != r){
        lazy[2*p] += lazy[p];
        lazy[2*p+1] += lazy[p];
    }
    lazy[p] = 0;
}

ll query(int a, int b, int p, int l, int r){
    propag(p, l, r);
    if (a > r || b < l) return 0ll;
    if (l >= a && r <= b) return seg[p];
    int m = (l+r)/2;
    return query(a, b, 2*p, l, m) + query(a, b, 2*p+1, m+1, r);
}

ll update(ll val, int a, int b, int p, int l, int r){
    propag(p,l,r);
    if (a > r || b < l) return seg[p];
    if (l >= a && r <= b){
        lazy[p] += val;
        propag(p,l,r);
        return seg[p];
    }
    int m = (l+r)/2;
    return seg[p] = update(val, a, b, 2*p, l, m) + update(val, a, b, 2*p+1, m+1, r);
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin >> t;
    while(t--){
        int n, c;

        cin >> n >> c;
        lazy.assign(n*4, 0);
        seg.assign(n*4, 0);

        for(int i = 0; i < c; i++){
            int op, p, q;
            ll val;
            cin >> op >> p >> q;
            if (op == 0){
                cin >> val;
                update(val, --p, --q, 1, 0, n-1);
            } else {
                cout << query(--p, --q, 1, 0, n-1) << endl;
            }
        }
    }
}