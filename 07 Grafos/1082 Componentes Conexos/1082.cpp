#include <bits/stdc++.h>

#define endl '\n'

using namespace std;

int cti(char chr){
    return chr - 'a';
}

char itc(int i){
    return i + 'a';
}

list<char> BFS(int s, vector<bool>& vis, vector<vector<char>> G){
    list<char> nds;
    nds.push_back(itc(s));

    queue<int> q;
    q.push(s); 
    vis[s] = true;

    while(!q.empty()){
        int v = q.front(); q.pop();

        for (char w : G[v]) if (!vis[cti(w)]){
            q.push(cti(w));
            vis[cti(w)] = true;
            nds.push_back(w);
        }
    }

    return nds;
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin >> t;

    for(int jj = 0; jj < t; jj++){
        int v, e;
        cin >> v >> e;

        vector<vector<char>> G(v);
        vector<bool> vis(v);

        for(int i = 0; i < e; i++){
            char a, b;
            cin >> a >> b;
            G[cti(a)].push_back(b);
            G[cti(b)].push_back(a);
        }

        vector<list<char>> components;
        cout << "Case #" << jj+1 << ":" << endl;
        for(int i = 0; i < v; i++) if (!vis[i]){
            components.push_back(BFS(i, vis, G));
        }

        for(list arr : components){
            arr.sort();
            for (char c : arr){
                cout << c << ',';
            }
            cout << endl;
        }
        cout << components.size() << " connected components" << endl << endl;

    }
}