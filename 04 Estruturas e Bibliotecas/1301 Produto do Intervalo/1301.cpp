#include <bits/stdc++.h>

#define endl '\n'
#define ll long long

using namespace std;

int n, k;
vector<int> vet; 
vector<char> seg;

char convert(int x){
    if (x > 0) return '+';
    if (x < 0) return '-';
    return '0';
}

char compare(char a, char b){
    if (a == '0' || b == '0') return '0';
    if (a == b) return '+';
    return '-';
}

char build(int p, int l, int r){
    if (l == r) return seg[p] = convert(vet[l]);
    int m = (l+r)/2;
    return seg[p] = compare(build(2*p, l, m), build(2*p+1, m+1, r));
}

char query(int a, int b, int p, int l, int r){
    if (b < l || a > r) return '+';
    if (a <= l && r <= b) return seg[p];
    int m = (l+r)/2;
    return compare(query(a, b, 2*p, l, m), query(a, b, 2*p+1, m+1, r));
}

char update(int i, int x, int p, int l, int r){
    if (i < l || r < i) return seg[p]; 
    if (l == r && i == l) return seg[p] = convert(x);
    int m = (l+r)/2;
    return seg[p] = compare(update(i, x, 2*p, l, m), update(i, x, 2*p+1, m+1, r));
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    while(cin >> n >> k){
        vet.resize(n);
        seg.resize(4*n);

        for(int i = 0; i < n; i++) cin >> vet[i];
        build(1, 0, n-1);
        for(int i = 0; i < k; i++){
            char op;
            cin >> op;  
            if (op == 'C'){
                int i, v;
                cin >> i >> v;
                i--;
                update(i, v, 1, 0, n-1);
            } else {
                int a, b;
                cin >> a >> b;
                a--; b--;
                cout << query(a, b, 1, 0, n-1);
            }
        }
        cout << endl;
    }
}
