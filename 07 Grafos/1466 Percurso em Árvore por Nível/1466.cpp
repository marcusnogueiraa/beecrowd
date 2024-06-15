#include <bits/stdc++.h>

#define endl '\n'

using namespace std;

struct Node {
public:
    int v;
    Node* l;
    Node* r;

    Node(int value){
        this->v = value;
    }
};

struct BinaryTree {
public:
    Node* root {nullptr};

    void add(int v){
        if (root == nullptr) {
            root = new Node(v);
            return;
        }

        Node* cn = root;

        while(true){
            if (v > cn->v && cn->r != nullptr) cn = cn->r;
            else if (v < cn->v && cn->l != nullptr) cn = cn->l;
            else if (v > cn->v){
                cn->r = new Node(v);
                break;
            }
            else if (v < cn->v){ 
                cn->l = new Node(v);
                break;
            }
        }
    }

    void bfs(){
        Node* cn;

        cout << root->v;
        queue<Node*> q;

        if (root->l != nullptr) q.push(root->l);
        if (root->r != nullptr) q.push(root->r);

        while(!q.empty()){
            cn = q.front(); q.pop();

            cout << " " << cn->v;

            if (cn->l != nullptr) q.push(cn->l);
            if (cn->r != nullptr) q.push(cn->r);
        }
        cout << endl;
    }
};

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin >> t;
    for(int i = 1; i <= t; i++){
        cout << "Case " << i << ":" << endl;

        int n;
        BinaryTree bt;
        cin >> n;

        for(int i = 0; i < n; i++){
            int a; cin >> a;
            bt.add(a);
        }

        bt.bfs();
        cout << endl;
    }
}