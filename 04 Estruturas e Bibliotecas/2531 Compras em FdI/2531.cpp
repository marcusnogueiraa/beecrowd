#include <bits/stdc++.h>

#define endl '\n'
#define ii pair<int, int>

using namespace std;

const int INF = numeric_limits<int>::max();
const int mINF = numeric_limits<int>::min();

struct Node {
    int maxValue;
    int minValue;
};

vector<int> vet;
vector<Node> seg;

Node merge(Node& node1, Node& node2){
    Node newNode;
    newNode.maxValue = max(node1.maxValue, node2.maxValue);
    newNode.minValue = min(node1.minValue, node2.minValue);
    return newNode;
}

Node build(int p, int l, int r){
    if (l == r) return seg[p] = {vet[l], vet[l]};
    
    int m = (l+r)/2;
    Node node1 = build(2*p, l, m);
    Node node2 = build(2*p+1, m+1, r);
    
    return seg[p] = merge(node1, node2);
}

Node query(int a, int b, int p, int l, int r){
    if (b < l || r < a) return {mINF, INF};
    if (a <= l && r <= b) return seg[p];
    
    int m = (l+r)/2;
    Node node1 = query(a, b, 2*p, l, m); 
    Node node2 = query(a, b, 2*p+1, m+1, r);

    return merge(node1, node2);
}

Node update(int val, int ind, int p, int l, int r){
    if (ind < l || ind > r) return seg[p];
    if (l == r && l == ind) return seg[p] = {val, val};
    
    int m = (l+r)/2;
    Node node1 = update(val, ind, 2*p, l , m);
    Node node2 = update(val, ind, 2*p+1, m+1, r);

    return seg[p] = merge(node1, node2);
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n, q;
    while(cin >> n){
        vet.resize(n);
        seg.resize(4*n);

        for(int i = 0; i < n; i++) cin >> vet[i];

        cin >> q;
        build(1, 0, n-1);
        for(int i = 0; i < q; i++){
            int op, a, b;
            cin >> op >> a >> b;

            if (op == 1){
                update(b, --a, 1, 0, n-1);
            } else {
                Node res = query(--a, --b, 1, 0, n-1);
                cout << res.maxValue - res.minValue << endl;
            }
        }
    }
}