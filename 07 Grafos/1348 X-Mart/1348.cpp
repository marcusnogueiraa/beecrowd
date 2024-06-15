#include <bits/stdc++.h>

#define endl '\n'

using namespace std;

stack<int> order;
vector<vector<int>> G, Gt;
vector<bool> vis;
vector<int> comp, assignment;

void dfs1(int v){
    vis[v] = true;
    for (auto u : G[v]){
        if (!vis[u]) dfs1(u);
    }
    order.push(v);
}

void dfs2(int v, int cc){
    comp[v] = cc;
    for(int u : Gt[v]){
        if (comp[u] == -1) dfs2(u, cc);
    }
}

void add_disjunc(int a, int na, int b, int nb){
    a = 2*a ^ na;
    b = 2*b ^ nb;

    int neg_a = a ^ 1;
    int neg_b = b ^ 1;

    G[neg_a].push_back(b);
    G[neg_b].push_back(a);

    Gt[b].push_back(neg_a);
    Gt[a].push_back(neg_b);    
}

bool _2Sat(int n){
    assignment.assign(n/2, false);
    for(int i = 0; i < n; i+=2){
        if (comp[i] == comp[i+1]) return false;
        assignment[i / 2] = comp[i] > comp[i + 1];
    }
    return true;
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int c, p;
    while(cin >> c >> p){
        if (c == 0 && p == 0) return 0;

        p *= 2;
        G.assign(p, vector<int>());
        Gt.assign(p, vector<int>());
        vis.assign(p, false);
        comp.assign(p, -1);

        for(int i = 0; i < c; i++){
            int a, b, y, z;
            cin >> a >> b >> y >> z;
            a--; b--; y--; z--;

            if (a != -1 || b != -1){
                if (a == -1) a = b;
                if (b == -1) b = a;
                add_disjunc(a, false, b, false);
            }

            if (y != -1 || z != -1){
                if (y == -1) y = z;
                if (z == -1) z = y;
                add_disjunc(y, true, z, true); 
            }
        }

        for(int i = 0; i < p; i++){
            if (!vis[i]){
                dfs1(i);
            }
        }

        int cc = 0;
        while (!order.empty()) {
            int v = order.top(); order.pop();
            if (comp[v] == -1) dfs2(v, cc++);
        }

        if (_2Sat(p)) 
            cout << "yes" << endl;
        else 
            cout << "no" << endl;

        G.clear();
        Gt.clear();
        vis.clear();
        comp.clear();
        assignment.clear();
        order = stack<int>(); // Clear the stack
    }
}
